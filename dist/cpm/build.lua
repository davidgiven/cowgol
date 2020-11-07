function cpmify(e)
	rule {
		ins = concat {
			"dist/cpm/tocpm.lua",
			e.ins,
		},
		outs = e.outs,
		cmd = "$LUA @1 < @2 > &1",
	}
end

cpmify {
	ins = { "examples/mandel.cow" },
	outs = { "$OBJ/dist/cpm/mandel.cow" },
}

cpmify {
	ins = { "rt/cpm/cowgol.coh" },
	outs = { "$OBJ/dist/cpm/cowgol.coh" },
}

cpmify {
	ins = { "rt/common.coh" },
	outs = { "$OBJ/dist/cpm/common.coh" },
}

cpmify {
	ins = { "dist/cpm/demo.sub" },
	outs = { "$OBJ/dist/cpm/demo.sub" },
}

copy {
	ins = { "$OBJ/rt/cpm/cowgol.coo" },
	outs = { "$OBJ/dist/cpm/cowgol.coo" }
}

copy {
	ins = { "bin/cowfe-8080.ncpm.8080.com" },
	outs = { "$OBJ/dist/cpm/cowfe.com" }
}

copy {
	ins = { "bin/cowbe-8080.ncpm.8080.com" },
	outs = { "$OBJ/dist/cpm/cowbe.com" }
}

copy {
	ins = { "bin/cowlink-8080.ncpm.8080.com" },
	outs = { "$OBJ/dist/cpm/cowlink.com" }
}

copy {
	ins = { "bin/cowasm-8080.ncpm.8080.com" },
	outs = { "$OBJ/dist/cpm/cowasm.com" }
}

