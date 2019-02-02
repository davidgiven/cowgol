#!/bin/sh
RUNFILES=$_.runfiles/__main__
exec $RUNFILES/emu/cpm/cpm "$1"
