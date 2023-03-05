from build.ab2 import Rule, Target, normalrule
from build.c import clibrary, cprogram

cprogram(name="m68kmake", srcs=["./m68kmake.c"])

normalrule(
    name="m68kops",
    ins=["+m68kmake", "./m68k_in.c"],
    outs=["m68kops.c", "m68kops.h"],
    commands=["{ins[0]} {dirname(outs[0])} {ins[1]} > /dev/null"],
    label="MUSASHILIB",
)


@Rule
def musashilib(self, name, m68kconf: Target() = None):
    clibrary(
        replaces=self,
        srcs=[
            m68kconf,
            "third_party/musashi/m68kcpu.c",
            "third_party/musashi/m68kcpu.h",
            "third_party/musashi/m68kdasm.c",
            "third_party/musashi/m68k.h",
            "third_party/musashi/m68kmmu.h",
            "third_party/musashi/softfloat/softfloat.c",
            "third_party/musashi/softfloat/softfloat.h",
            "third_party/musashi+m68kops",
        ],
    )
