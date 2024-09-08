from build.ab import Rule, Target, simplerule
from build.c import clibrary, cprogram
from os.path import *

cprogram(name="m68kmake", srcs=["./m68kmake.c"])

simplerule(
    name="m68kops",
    ins=[".+m68kmake", "./m68k_in.c"],
    outs=["=m68kops.c", "=m68kops.h"],
    commands=["{ins[0]} {dir} {ins[1]} > /dev/null"],
    label="MUSASHILIB",
)


@Rule
def musashilib(self, name, m68kconf: Target = None):
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
