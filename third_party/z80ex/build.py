from build.c import clibrary

clibrary(
    name="z80ex",
    srcs=[
        "./z80ex.c",
        "./z80ex_dasm.c",
        "./include/z80ex_dasm.h",
        "./include/z80ex_common.h",
    ],
    hdrs={
        "z80ex/z80ex.h": "./include/z80ex.h",
        "z80ex/z80ex_dasm.h": "./include/z80ex_dasm.h",
        "z80ex_common.h": "./include/z80ex_common.h",
    },
    cflags=[
        "-DZ80EX_VERSION_STR=1.1.21",
        "-DZ80EX_VERSION_MAJOR=1",
        "-DZ80EX_VERSION_MINOR=1",
        "-DZ80EX_API_REVISION=21",
    ],
)
