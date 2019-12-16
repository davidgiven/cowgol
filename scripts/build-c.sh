#!/bin/sh
set -e

./tinycowc-c "$1" intermediate.c
gcc -ffunction-sections -fdata-sections -g -Os rt/c/cowgol.c intermediate.c -o cowgol
