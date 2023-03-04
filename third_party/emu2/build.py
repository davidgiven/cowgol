from build.c import cprogram

cprogram(
    name="emu2",
    srcs=[
        "./src/cpu.c",
        "./src/loader.c",
        "./src/main.c",
        "./src/codepage.c",
        "./src/dosnames.c",
        "./src/dis.c",
        "./src/dos.c",
        "./src/keyb.c",
        "./src/dbg.c",
        "./src/timer.c",
        "./src/utils.c",
        "./src/video.c",
    ],
    vars={
        "+ldflags": ["-lm"]
    }
)
