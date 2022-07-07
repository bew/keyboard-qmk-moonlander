_default:
  {{ just_executable() }} --list

build *ARGS:
  nix build .#packages.avr.moonlander-bew0-firmware {{ ARGS }}
