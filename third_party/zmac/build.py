from build.yacc import yacc
from build.c import cprogram
from build.ab2 import Rule, Targets, normalrule, filenameof
from os.path import *

yacc(
    name="parser",
    srcs=["third_party/zmac/zmac.y"],
)

cprogram(
    name="zmac",
    srcs=["+parser", "./mio.c", "./zi80dis.cpp", "./zi80dis.h"],
    vars={
        "+cflags": ["-Ithird_party/zmac"],
    },
)


@Rule
def zmac(self, name, srcs: Targets() = []):
    filename, ext = splitext(filenameof(srcs))
    archflag = "-z" if (ext == "z80") else "-8"

    normalrule(
        replaces=self,
        ins=["third_party/zmac", srcs[0]],
        outleaves=[self.localname + ".cim", self.localname + ".lst"],
        commands=["{ins[0]} -j -m " + archflag + " -o {outs[0]} -o {outs[1]} {ins[1]}"],
        label="ZMAC",
    )
