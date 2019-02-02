#!/bin/sh
RUNFILES=$_.runfiles/__main__
exec $RUNFILES/emu/bbctube/bbctube -l 0x800 -e 0x800 -f "$1"
