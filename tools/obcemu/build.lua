cprogram {
	ins = {
		"tools/obcemu/main.c",
		"tools/obcemu/emulator.c",
	},
	outs = { "bin/obcemu" },
	ldflags = "-lreadline",
}




