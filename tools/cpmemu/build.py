from build.c import cprogram

cprogram(
    name="cpmemu"
    srcs=[
        "./main.c",
        "./emulator.c",
        "./fileio.c",
        "./biosbdos.c",
    ],
    vars={
        "+ldflags": ["-lz80ex", "-lz80ex_dasm", "-lreadline"]
    }
)
