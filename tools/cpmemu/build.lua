zmac {
	ins = { "tools/cpmemu/biosbdos.z80" },
	outs = { "$OBJ/tools/cpmemu/biosbdos.cim" }
}

objectify {
	ins = { "$OBJ/tools/cpmemu/biosbdos.cim" },
	outs = { "$OBJ/tools/cpmemu/biosbdosdata.c" },
	symbol = "biosbdosdata"
}

cprogram {
	ins = {
		"tools/cpmemu/main.c",
		"tools/cpmemu/emulator.c",
		"tools/cpmemu/fileio.c",
		"tools/cpmemu/biosbdos.c",
		"$OBJ/tools/cpmemu/biosbdosdata.c",
	},
	ldflags = "-lz80ex -lz80ex_dasm -lreadline",
	outs = { "bin/cpmemu" }
}


