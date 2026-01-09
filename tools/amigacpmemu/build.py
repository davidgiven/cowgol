from build.c import cprogram
from third_party.musashi.build import musashilib

musashilib(
    name="musashi",
    m68kconf="tools/amigacpmemu/m68kconf.h",
)

cprogram(
    name="amigacpmemu",
    srcs=[
        "./bdos.c",
        "./bios.c",
        "./xbios.c",
        "./sim.c",
        "./sim.h",
        "./fileio.c",
        "third_party/musashi/m68k.h",
    ],
    deps=[".+musashi"],
)
