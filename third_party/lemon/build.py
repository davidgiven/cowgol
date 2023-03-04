from build.ab2 import Rule, Target, normalrule
from build.c import cprogram

cprogram(
    name="lemon",
    srcs=["./lemon.c"],
)

cprogram(
    name="lemon-cowgol",
    srcs=["./lemon-cowgol.c"],
)


@Rule
def lemon(self, name, src: Target() = None):
    normalrule(
        replaces=self,
        ins=["+lemon", "./lempar.c", src],
        outleaves=[self.localname + ".c", self.localname + ".h"],
        commands=["{ins[0]} -T{ins[1]} -d{dirname(outs[0])} {ins[2]}"],
        label="LEMON",
    )


@Rule
def lemoncowgol(self, name, src: Target() = None):
    normalrule(
        replaces=self,
        ins=["+lemon-cowgol", "src/cowfe/lempar.coh", src],
        outleaves=[self.localname + ".coh", self.localname + ".tokens.coh"],
        commands=["{ins[0]} -T{ins[1]} -d{dirname(outs[0])} {ins[2]}"],
        label="LEMON-COWGOL",
    )
