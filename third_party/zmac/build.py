from build.yacc import yacc
from build.c import cprogram

yacc(
    name="parser",
    srcs=["third_party/zmac/zmac.y"],
)

cprogram(
    name="zmac",
    srcs=[
        "+parser",
        "./mio.c",
        "./zi80dis.cpp",
        "./zi80dis.h"
    ],
    vars={
        "+cflags": ["-Ithird_party/zmac"],
    }
)
