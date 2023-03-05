from build.c import cprogram
from build.ab2 import Rule, Target, normalrule

cprogram(
    name="mkadfs",
    srcs=["./mkadfs.c"],
)

cprogram(
    name="mkdfs",
    srcs=["./mkdfs.c"],
)


@Rule
def objectify(self, name, src: Target() = None, symbol=None):
    normalrule(
        replaces=self,
        ins=["tools/objectify", src],
        outs=[symbol + ".c"],
        commands=["lua {ins[0]} " + symbol + " < {ins[1]} > {outs}"],
        label="OBJECTIFY",
    )


@Rule
def tocpm(self, name, src: Target() = None):
    normalrule(
        replaces=self,
        ins=["tools/tocpm.lua", src],
        outs=[self.localname + ".txt"],
        commands=["lua {ins[0]} < {ins[1]} > {outs}"],
        label="TOCPM",
    )
