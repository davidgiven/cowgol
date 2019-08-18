#!/bin/sh
set -e

./tinycowc-8080 "$1" intermediate.asm
zmac -8 rt/cpm/cowgol.asm -o rt/cpm/cowgol.rel
zmac -8 intermediate.asm -o intermediate.rel
ld80 -O bin -c -P0100 rt/cpm/cowgol.rel intermediate.rel -o cowgol.bin
dd if=cowgol.bin of=cowgol.com bs=128 skip=2
