copy {
	ins = { "examples/mandel.cow" },
	outs = { "$OBJ/dist/ataritos/mandel.cow" },
}

copy {
	ins = { "rt/ataritos/cowgol.coh" },
	outs = { "$OBJ/dist/ataritos/cowgol.coh" },
}

copy {
	ins = { "rt/common.coh" },
	outs = { "$OBJ/dist/ataritos/common.coh" },
}

copy {
	ins = { "$OBJ/rt/ataritos/cowgol.coo" },
	outs = { "$OBJ/dist/ataritos/cowgol.coo" }
}

copy {
	ins = { "bin/cowfe-32bita2.ataritos.ataritos.tos" },
	outs = { "$OBJ/dist/ataritos/cowfe.tos" }
}

copy {
	ins = { "bin/cowbe-68000.ataritos.ataritos.tos" },
	outs = { "$OBJ/dist/ataritos/cowbe.tos" }
}

copy {
	ins = { "bin/cowlink-ataritos.ataritos.ataritos.tos" },
	outs = { "$OBJ/dist/ataritos/cowlink.tos" }
}


