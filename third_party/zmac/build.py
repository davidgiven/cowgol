from build.yacc import yacc
from build.c import cprogram
from build.ab import Rule, Targets, simplerule, filenameof
from os.path import *

yacc(
    name="parser",
    srcs=["third_party/zmac/zmac.y"],
)

cprogram(
    name="zmac",
    srcs=[".+parser", "./mio.c", "./zi80dis.cpp", "./zi80dis.h"],
    cflags=["-Ithird_party/zmac"],
)


@Rule
def zmac(self, name, srcs: Targets):
    assert len(srcs) == 1, "zmac can only take one source file"
    filename, ext = splitext(filenameof(srcs[0]))
    archflag = "-z" if (ext == ".z80") else "-8"

    simplerule(
        replaces=self,
        ins=["third_party/zmac", srcs[0]],
        outs=[f"={self.localname}.cim"],
        commands=[
            "{ins[0]} -j -m "
            + archflag
            + " -o {outs[0]} -o {outs[0]}.lst {ins[1]}"
        ],
        label="ZMAC",
    )
