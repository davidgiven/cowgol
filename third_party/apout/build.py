from build.c import cprogram

cprogram(
    name="apout",
    srcs=[
        "./aout.c",
        "./branch.c",
        "./bsd_ioctl.c",
        "./bsd_signal.c",
        "./bsdtrap.c",
        "./cpu.c",
        "./debug.c",
        "./double.c",
        "./ea.c",
        "./fp.c",
        "./itab.c",
        "./ke11a.c",
        "./magic.c",
        "./main.c",
        "./single.c",
        "./v1trap.c",
        "./v7trap.c",
    ],
    vars={
        "+ldflags": ["-lm"],
        "+cflags": [
            "-DEMUV1",
            "-DNATIVES",
            "-DRUN_V1_RAW",
            "-DDEBUG",
            "-DZERO_MEMORY",
            "-DWRITEBASE",
            "-DHEX",
        ],
    },
)
