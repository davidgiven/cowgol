function cpmify(e)
	rule {
		ins = concat {
			"dist/cpmbasic/tocpm.lua",
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
	ins = { "dist/cpmbasic/demo.sub" },
	outs = { "$OBJ/dist/cpmbasic/demo.sub" },
}

cpmify {
	ins = { "examples/music.dat" },
	outs = { "$OBJ/dist/cpmbasic/music.dat" },
}

cpmify {
	ins = { "examples/crisps.cow" },
	outs = { "$OBJ/dist/cpmbasic/crisps.cow" },
}

copy {
	ins = { "bin/cowfe-basic.ncpmz.z80.com" },
	outs = { "$OBJ/dist/cpmbasic/cowfe.com" }
}

copy {
	ins = { "bin/cowbe-basic.ncpmz.z80.com" },
	outs = { "$OBJ/dist/cpmbasic/cowbe.com" }
}

copy {
	ins = { "bin/cowlink-basic.ncpmz.z80.com" },
	outs = { "$OBJ/dist/cpmbasic/cowlink.com" }
}

copy {
	ins = { "bin/basicify.ncpmz.z80.com" },
	outs = { "$OBJ/dist/cpmbasic/basicify.com" }
}

