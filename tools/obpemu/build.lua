cprogram {
	ins = {
		"tools/obpemu/main.c",
		"tools/obpemu/emulator.c",
	},
	outs = { "bin/obpemu" },
	ldflags = "-lreadline",
}




