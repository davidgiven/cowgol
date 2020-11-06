cprogram {
	ins = {
		"third_party/emu2/src/cpu.c",
		"third_party/emu2/src/loader.c",
		"third_party/emu2/src/main.c",
		"third_party/emu2/src/codepage.c",
		"third_party/emu2/src/dosnames.c",
		"third_party/emu2/src/dis.c",
		"third_party/emu2/src/dos.c",
		"third_party/emu2/src/keyb.c",
		"third_party/emu2/src/dbg.c",
		"third_party/emu2/src/timer.c",
		"third_party/emu2/src/utils.c",
		"third_party/emu2/src/video.c",
	},
	ldflags = "-lm",
	outs = { "bin/emu2" }
}

