from build.c import cprogram
from third_party.zmac.build import zmac
from tools.build import objectify

zmac(name="biosbdos", srcs=["./biosbdos.z80"])

objectify(name="biosbdosdata", src=".+biosbdos", symbol="biosbdosdata")

cprogram(
    name="cpmemu",
    srcs=[
        "./main.c",
        "./emulator.c",
        "./fileio.c",
        "./biosbdos.c",
        ".+biosbdosdata",
    ],
    ldflags= ["-lz80ex", "-lz80ex_dasm", "-lreadline"],
)
