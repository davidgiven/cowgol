#!/bin/sh
set -e
make -j$(nproc)
cp .obj/src/cowfe/+cowfe-for-cgen-with-nncgen/cowlink/cowfe-for-cgen-with-nncgen.c bootstrap/cowfe-cgen.bootstrap.c
cp .obj/src/cowbe/+cowbe-for-cgen-with-nncgen/cowlink/cowbe-for-cgen-with-nncgen.c bootstrap/cowbe-cgen.bootstrap.c
cp .obj/src/cowlink/+cowlink-for-cgen-with-nncgen/cowlink/cowlink-for-cgen-with-nncgen.c bootstrap/cowlink-cgen.bootstrap.c
cp .obj/src/cowwrap/+cowwrap-with-nncgen/cowlink/cowwrap-with-nncgen.c bootstrap/cowwrap.bootstrap.c

