normalrule {
	name = "iburgcodes_h",
	outleaves = { "iburgcodes.h" },
	ins = {
		"./mkiburgcodes.lua",
		"./libcowgol.lua",
		"src/midcodes.tab",
	},
	commands = {
		"lua %{ins[1]} -- %{ins[3]} %{outs[1]}"
	}
}

normalrule {
	name = "iburgcodes_cowgol_h",
	outleaves = { "iburgcodes-coh.h" },
	ins = {
		"./mkiburgcodes.lua",
		"./libcowgol.lua",
		"src/midcodes.coh.tab",
	},
	commands = {
		"lua %{ins[1]} -- %{ins[3]} %{outs[1]}"
	}
}

normalrule {
	name = "midcodes_h",
	outleaves = { "midcodes.h" },
	ins = {
		"./mkmidcodesh.lua",
		"./libcowgol.lua",
		"src/midcodes.tab"
	},
	commands = {
		"lua %{ins[1]} -- %{ins[3]} %{outs[1]}"
	}
}

normalrule {
	name = "midcodes_c",
	outleaves = { "midcodes.c" },
	ins = {
		"./mkmidcodesc.lua",
		"./libcowgol.lua",
		"src/midcodes.tab"
	},
	commands = {
		"lua %{ins[1]} -- %{ins[3]} %{outs[1]}"
	}
}

normalrule {
	name = "midcodes_coh",
	outleaves = { "midcodes.coh" },
	ins = {
		"./mkmidcodescoh.lua",
		"./libcowgol.lua",
		"src/midcodes.coh.tab"
	},
	commands = {
		"lua %{ins[1]} -- %{ins[3]} %{outs[1]}"
	}
}

