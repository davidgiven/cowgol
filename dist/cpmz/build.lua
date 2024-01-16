function cpmify(e)
	rule {
		ins = concat {
			"dist/cpmz/tocpm.lua",
			e.ins,
		},
		outs = e.outs,
		cmd = "$LUA @1 < @2 > &1",
	}
end

function copy(e)
	rule {
		ins = e.ins,
		outs = e.outs,
		cmd = "cp @1 &1"
	}
end

cpmify {
	ins = { "examples/mandel.cow" },
	outs = { "$OBJ/dist/cpmz/mandel.cow" },
}

cpmify {
	ins = { "rt/cpmz/cowgol.coh" },
	outs = { "$OBJ/dist/cpmz/cowgol.coh" },
}

cpmify {
	ins = { "rt/common.coh" },
	outs = { "$OBJ/dist/cpmz/common.coh" },
}

cpmify {
	ins = { "dist/cpmz/demo.sub" },
	outs = { "$OBJ/dist/cpmz/demo.sub" },
}

copy {
	ins = { "$OBJ/rt/cpmz/cowgol.coo" },
	outs = { "$OBJ/dist/cpmz/cowgol.coo" }
}

copy {
	ins = { "bin/cowfe-16bit.ncpmz.ncpmz.com" },
	outs = { "$OBJ/dist/cpmz/cowfe.com" }
}

copy {
	ins = { "bin/cowbe-z80.ncpmz.ncpmz.com" },
	outs = { "$OBJ/dist/cpmz/cowbe.com" }
}

copy {
	ins = { "bin/cowlink-ncpmz.ncpmz.ncpmz.com" },
	outs = { "$OBJ/dist/cpmz/cowlink.com" }
}

