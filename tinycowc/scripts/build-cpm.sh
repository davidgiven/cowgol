#!/bin/sh
set -e

./tinycowc-8080 "$1" $2-intermediate.asm
zmac -8 rt/cpm/cowgol.asm -o rt/cpm/cowgol.rel
zmac -8 $2-intermediate.asm -o $2-intermediate.rel
ld80 -O bin -c -P0100 rt/cpm/cowgol.rel $2-intermediate.rel -o cowgol.bin -s -
dd if=cowgol.bin of="$2" bs=128 skip=2
