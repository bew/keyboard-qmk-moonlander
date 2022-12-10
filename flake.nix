#
# --- IDEA: Crazy idea? (the gist of it)
# Completely define a layout config using Nix and the module system...
# Each key would be a attrset describing its action (potentially complex, composite, composable),
# that would be implemented by a set of hidden functions generated by this specific config...
#
{
  description = "Build Moonlander keyboard firmware (to be flashed with Wally)";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-22.05";

    devshell.url = "github:numtide/devshell";
  };

  outputs = { self, nixpkgs, devshell }:
  let
    pkgs = import nixpkgs { system = "x86_64-linux"; };

    zsa-qmk-repo = pkgs.fetchgit ({
      url = "https://github.com/zsa/qmk_firmware";
      branchName = "firmware21";
      fetchSubmodules = true;
    } // {
      # Fields to change on update!
      rev = "b6657f6a7b8cf244eeac546c334377f5430e7b0c";
      hash = "sha256-zrnOHG1cICXK/p01wGzDGikTPU5k5mYlEPJpnHvxsKU=";
    });

    # is there a better way to patch a repo?
    zsa-qmk-repo--patched = pkgs.stdenv.mkDerivation {
      name = "zsa-qmk-repo-patched";
      src = zsa-qmk-repo;
      patches = [
        (pkgs.fetchpatch {
          name = "zsa-qmk-repo--nix-requirement-fix.patch";
          url = "https://github.com/qmk/qmk_firmware/commit/650be92cf96440920ebf1079c11f2f36c4a9edc1.patch";
          hash = "sha256-YcKsmZwUJS3Czt7pTjdlK08EXWcihTbVRfDkuCMK2Cg=";
        })
      ];
      phases = [ "unpackPhase" "patchPhase" "installPhase" ];
      installPhase = ''
        cd .. # to be able to move current folder
        mv ./$sourceRoot $out
      '';
    };

    # Inspired from:
    # * https://github.com/qmk/qmk_firmware/blob/master/shell.nix
    # * https://docs.qmk.fm/#/newbs_getting_started

    avr-libc = pkgs.pkgsCross.avr.libcCross;
    avr-includeFlags = [
      "-isystem ${avr-libc}/avr/include"
      "-B${avr-libc}/avr/lib/avr5"
      "-L${avr-libc}/avr/lib/avr5"
      "-B${avr-libc}/avr/lib/avr35"
      "-L${avr-libc}/avr/lib/avr35"
      "-B${avr-libc}/avr/lib/avr51"
      "-L${avr-libc}/avr/lib/avr51"
    ];

    qmk-pythonEnv = pkgs.poetry2nix.mkPoetryEnv {
      projectDir = "${zsa-qmk-repo--patched}/util/nix";
      overrides = pkgs.poetry2nix.overrides.withDefaults (self: super: {
        # NOTE: pillow override gotten from:
        # https://github.com/qmk/qmk_firmware/pull/17243
        pillow = super.pillow.overridePythonAttrs(old: {
          # Use preConfigure from nixpkgs to fix library detection issues and
          # impurities which can break the build process; this also requires
          # adding propagatedBuildInputs and buildInputs from the same source.
          propagatedBuildInputs = (old.buildInputs or []) ++ pkgs.python3.pkgs.pillow.propagatedBuildInputs;
          buildInputs = (old.buildInputs or []) ++ pkgs.python3.pkgs.pillow.buildInputs;
          preConfigure = (old.preConfigure or "") + pkgs.python3.pkgs.pillow.preConfigure;
        });
        qmk = super.qmk.overridePythonAttrs(old: {
          # Allow QMK CLI to run "qmk" as a subprocess (the wrapper changes
          # $PATH and breaks these invocations).
          dontWrapPythonPrograms = true;
        });
      });
    };
  in {
    packages.avr.moonlander-bew0-firmware = pkgs.stdenv.mkDerivation {
      name = "moonlander-bew0-firmware";

      src = zsa-qmk-repo; # my own code will be copied in it on postUnpack

      AVR_CFLAGS = avr-includeFlags;
      AVR_ASFLAGS = avr-includeFlags;

      buildInputs = [
        pkgs.clang-tools
        pkgs.dfu-programmer
        pkgs.dfu-util
        qmk-pythonEnv
      ] ++ [ # avr toolchain
        pkgs.pkgsCross.avr.buildPackages.binutils
        pkgs.pkgsCross.avr.buildPackages.gcc8
        pkgs.avrdude
        avr-libc

        # no idea why this is needed...
        pkgs.gcc-arm-embedded # provides arm-none-eabi-gcc
      ];

      postUnpack = ''
        echo "Adding my keymap to qmk's repo"

        # NOTE: At unpack phase, cwd is not yet in the source directory.
        #       Need to mention 'source/' everytime needed!
        cp -r ${./moonlander_bew0_source} ./$sourceRoot/keyboards/moonlander/keymaps/bew0
      '';

      configurePhase = ''
        # Necessary to tell 'qmk' helper program where the qmk repo is.
        # (it's searched by default in $HOME)
        export QMK_HOME=$PWD

        # This fails with minor errors only
        # TODO: is there a way to not fail if only minor errors detected?
        #qmk doctor && echo after qmk doctor
      '';

      buildPhase = ''
        # SKIP_GIT is needed to skip generation of a version.h file, that uses info from git,
        #   since our repo is not a git project ('.git' folder has been removed).
        make moonlander:bew0 SKIP_GIT=1
      '';

      installPhase = ''
        mkdir -p $out
        cp .build/*.hex .build/*.bin $out
      '';
    };

    packages.avr.default = self.packages.avr.moonlander-bew0-firmware;

    # devShells.x86_64-linux.default
    devShells = let
      system = "x86_64-linux";
      pkgs = nixpkgs.legacyPackages.${system};
      bins.wally-cli = "${pkgs.wally-cli}/bin/wally-cli";
    in {
      ${system}.default = (import devshell { inherit system; }).mkShell {
        name = "zsa-dev-shell";
        commands = [
          {
            name = "flash-moonlander-bew0";
            command = ''
              # We build have single keyboard here, so glob will return a single result
              ${bins.wally-cli} ${self.packages.avr.moonlander-bew0-firmware}/*.bin
            '';
          }
        ];
      };
    };
  };
}
