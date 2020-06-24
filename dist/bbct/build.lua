function bbcify(e)
	rule {
		ins = e.ins,
		outs = e.outs,
		cmd = [[sed -e 's/include "\(.*\)\.coh"/include "h.\1"/' < @1 | expand -t4 | tr '\n' '\r' > &1]]
	}
end

bbcify {
	ins = { "examples/mandel.cow" },
	outs = { "$OBJ/dist/bbct/mandel.cow" },
}

bbcify {
	ins = { "rt/bbct/cowgol.coh" },
	outs = { "$OBJ/dist/bbct/cowgol.coh" },
}

bbcify {
	ins = { "rt/common.coh" },
	outs = { "$OBJ/dist/bbct/common.coh" },
}

mkdfs {
	ins = {
		"-f", "dist/bbct/!boot",
		"-f", "bin/cowfe-6502.bbct.bbct", "-e0x400", "-l0x400", "-ncowfe",
		"-f", "bin/cowbe-65c02.bbct.bbct", "-e0x400", "-l0x400", "-ncowbe",
		"-f", "bin/cowlink-bbctn.bbct.bbct", "-e0x400", "-l0x400", "-ncowlink",
		"-f", "$OBJ/rt/bbct/cowgol.coo", "-no.cowgol",
		"-f", "$OBJ/dist/bbct/cowgol.coh", "-nh.cowgol",
		"-f", "$OBJ/dist/bbct/common.coh", "-nh.common",
		"-f", "$OBJ/dist/bbct/mandel.cow", "-nw.source",
		"-B4"
	},
	outs = { "bbct.ssd" }
}

mkdfs {
	ins = {},
	outs = { "bbctwork.ssd" }
}

