#!/usr/bin/env bash

function run_verbose
{
  >&2 echo ">> Executing... $*"
  "$@"
}

# Safer shell script with these options
# -e          : exit if a command exits with non-zero status
# -u          : exit if an expanded variable does not exist
# -o pipefail : if a command in a pipeline fail, fail the pipeline
#               (e.g this now fails: false | true)
set -euo pipefail

if [[ $# < 2 ]]; then
  >&2 echo "Usage: $0 [--keep-zip] <keyboard-folder> <path-to-zip>"
  >&2 echo
  >&2 echo "Example"
  >&2 echo "   $0 moonlander_bew0_source ~/Downloads/moonlander_bew0_pqE4P_b360P.zip"
  exit 1
fi

keep_zip=false
if [[ "$1" == "--keep-zip" ]]; then
  keep_zip=true
  shift
fi

KEYBOARD_FOLDER=${1%/} # note: remove trailing slash
ZIP_SOURCE=$2

# -o : Overwrite files without promt
run_verbose unzip -o "$ZIP_SOURCE" "$KEYBOARD_FOLDER/*"
if ! $keep_zip; then
  >&2 echo
  >&2 echo "-- Removing zip (keep it by passing --keep-zip)"
  run_verbose rm "$ZIP_SOURCE"
fi
