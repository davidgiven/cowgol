from build.c import cprogram
from third_party.musashi.build import musashilib

musashilib(
    name="musashi",
    m68kconf="tools/lx68kemu/m68kconf.h",
)

cprogram(
    name="lx68kemu",
    srcs=[
        "./sim.c",
        "./sim.h",
        "third_party/musashi/m68k.h",
    ],
    deps=[".+musashi"],
)
