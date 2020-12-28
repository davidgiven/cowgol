musashilib {
	m68kconf = "tools/ataritosemu/m68kconf.h",
	outs = { "$OBJ/tools/ataritosemu/libmusashi.a" }
}

cprogram {
	ins = {
		"tools/ataritosemu/sim.c",
		"tools/ataritosemu/sim.h",
		"third_party/musashi/m68k.h",
		"$OBJ/tools/ataritosemu/libmusashi.a",
	},
	outs = { "bin/ataritosemu" },
}


