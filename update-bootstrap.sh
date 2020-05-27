#!/bin/sh
set -e
make
cp .obj/bin/cowcom.cgen.nncgen.c bootstrap/cowcom.cgen.bootstrap.c
cp .obj/bin/cowlink.cgen.nncgen.c bootstrap/cowlink.cgen.bootstrap.c
cp .obj/bin/cowwrap.nncgen.c bootstrap/cowwrap.bootstrap.c

