musashilib {
	m68kconf = "tools/lx68kemu/m68kconf.h",
	outs = { "$OBJ/tools/lx68kemu/libmusashi.a" }
}

cprogram {
	ins = {
		"tools/lx68kemu/sim.c",
		"tools/lx68kemu/sim.h",
		"third_party/musashi/m68k.h",
		"$OBJ/tools/lx68kemu/libmusashi.a",
	},
	outs = { "bin/lx68kemu" },
}


