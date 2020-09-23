cprogram {
	ins = {
		"third_party/apout/aout.c",
		"third_party/apout/branch.c",
		"third_party/apout/bsd_ioctl.c",
		"third_party/apout/bsd_signal.c",
		"third_party/apout/bsdtrap.c",
		"third_party/apout/cpu.c",
		"third_party/apout/debug.c",
		"third_party/apout/double.c",
		"third_party/apout/ea.c",
		"third_party/apout/fp.c",
		"third_party/apout/itab.c",
		"third_party/apout/ke11a.c",
		"third_party/apout/magic.c",
		"third_party/apout/main.c",
		"third_party/apout/single.c",
		"third_party/apout/v1trap.c",
		"third_party/apout/v7trap.c",
	},
	ldflags = "-lm",
	cflags = "-DEMUV1 -DNATIVES -DRUN_V1_RAW -DDEBUG -DZERO_MEMORY -DWRITEBASE -DHEX",
	outs = { "bin/apout" }
}

