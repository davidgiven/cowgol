cprogram {
	ins = {
		"tools/fuzix6303emu/main.c",
		"tools/fuzix6303emu/disasm.c",
		"tools/fuzix6303emu/globals.h",
		"third_party/rc2014emu/6800.c",
		"third_party/rc2014emu/6800.h",
	},
	outs = { "bin/fuzix6303emu" },
	ldflags = "-lreadline",
}




