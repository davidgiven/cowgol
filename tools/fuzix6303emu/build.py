from build.c import cprogram

cprogram(
    name="fuzix6303emu",
    srcs=[
        "./main.c",
        "./disasm.c",
        "./globals.h",
    ],
    deps=["third_party/rc2014emu"],
    ldflags=["-lreadline"],
)
