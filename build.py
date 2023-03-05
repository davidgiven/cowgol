from os.path import *

installable(
    name="all",
    items={
        "bbctube.o": "tools/tubeemu+bbctube",
    })

cfile(
    name="cfile",
    srcs=["tools/tubeemu/bbctube.c"],
    vars={
        "+cflags": ["-Ithird_party/lib6502"]
    }
)
