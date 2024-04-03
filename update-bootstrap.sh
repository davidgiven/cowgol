#!/bin/sh
set -e
make -j$(nproc)
cp .obj/bin/cowfe-cgen.nncgen.c bootstrap/cowfe-cgen.bootstrap.c
cp .obj/bin/cowbe-cgen.nncgen.c bootstrap/cowbe-cgen.bootstrap.c
cp .obj/bin/cowlink-cgen.nncgen.c bootstrap/cowlink-cgen.bootstrap.c
cp .obj/bin/cowwrap.nncgen.c bootstrap/cowwrap.bootstrap.c

