from build.c import cprogram
from build.utils import objectify
from third_party.zmac.build import zmac

zmac(name="biosbdos", srcs=["./biosbdos.z80"])

objectify(name="biosbdosdata", src=".+biosbdos", symbol="biosbdosdata")

cprogram(
    name="cpmemu",
    srcs=[
        ".+biosbdosdata",
        "./biosbdos.c",
        "./emulator.c",
        "./fileio.c",
        "./globals.h",
        "./main.c",
    ],
    ldflags=["-lreadline"],
    deps=["third_party/z80ex"],
)
