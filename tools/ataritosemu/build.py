from build.c import cprogram
from third_party.musashi.build import musashilib

musashilib(
    name="musashi",
    m68kconf="tools/ataritosemu/m68kconf.h",
)

cprogram(
    name="ataritosemu",
    srcs=[
        "./gemdos.c",
        "./sim.c",
        "./sim.h",
        "third_party/musashi/m68k.h",
    ],
    deps=[".+musashi"],
)
