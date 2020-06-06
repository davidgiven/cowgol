yacc {
	ins = { "third_party/zmac/zmac.y" },
	outs = {
		"$OBJ/third_party/zmac/y.tab.c",
		"$OBJ/third_party/zmac/y.tab.h",
	}
}

cprogram {
	ins = {
		"$OBJ/third_party/zmac/y.tab.c",
		"third_party/zmac/mio.c",
		"third_party/zmac/zi80dis.cpp"
	},
	outs = {
		"bin/zmac"
	},
	cflags = "-I$OBJ/third_party/zmac -Ithird_party/zmac"
}

function zmac(e)
	local f = e.ins[1]
	local _, _, ext = f:find("%.(%w+)$")
	local archflag = (ext == "z80") and "-z" or "-8"

	local hdrpaths = {}
	for _, t in ipairs(e.ins) do
		hdrpaths[#hdrpaths+1] = "-I"..t
	end

	rule {
		ins = concat(
			"bin/zmac",
			e.ins
		),
		outs = e.outs,
		cmd = "@1 -j -m "..archflag.." -o &1 "..table.concat(hdrpaths, " ").." @2"
	}
end

