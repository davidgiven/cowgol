#!/bin/sh
set -e
if [ ! -e cpm-external ]; then
	git clone --depth 1 git@github.com:jhallen/cpm.git cpm-external
fi
make -C cpm-external
cp cpm-external/cpm .

