from build.ab import Rule, Target, simplerule
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
def lemon(self, name, src: Target = None):
    simplerule(
        replaces=self,
        ins=["third_party/lemon+lemon", "third_party/lemon/lempar.c", src],
        outs=[f"={self.localname}.c", f"={self.localname}.h"],
        commands=["{ins[0]} -T{ins[1]} -d{dir} {ins[2]}"],
        label="LEMON",
    )


@Rule
def lemoncowgol(self, name, src: Target = None):
    simplerule(
        replaces=self,
        ins=["third_party/lemon+lemon-cowgol", "src/cowfe/lempar.coh", src],
        outs=[f"={self.localname}.coh", f"={self.localname}.tokens.coh"],
        commands=["{ins[0]} -T{ins[1]} -d{dir} {ins[2]}"],
        label="LEMON-COWGOL",
    )
