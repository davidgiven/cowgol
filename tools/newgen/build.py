from build.ab import Rule, Targets, simplerule
from build.c import cprogram
from build.yacc import flex
from build.gpp import gpp
from third_party.lemon.build import lemon

lemon(name="parser", src="./parser.y")

flex(name="lexer", srcs=["./lexer.l"])

cprogram(
    name="newgen",
    srcs=[
        "./main.c",
        "./utils.c",
        "./globals.h",
        ".+parser",
        ".+lexer",
        "src+iburgcodes",
    ],
    cflags=["-DCOWGOL"],
    ldflags=["-lfl"],
)


@Rule
def newgencowgol(self, name, srcs: Targets = []):
    preprocessed = gpp(name=name + "/preprocessed", srcs=srcs)

    simplerule(
        replaces=self,
        ins=["tools/newgen", preprocessed],
        outs=["=inssel.coh", "=inssel.decl.coh"],
        commands=["{ins[0]} {ins[1]} {outs[0]} {outs[1]}"],
        label="NEWGEN",
    )
