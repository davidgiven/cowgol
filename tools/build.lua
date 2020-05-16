function objectify(e)
	rule {
		ins = concat {
			"tools/objectify",
			e.ins
		},
		outs = e.outs,
		cmd = "$LUA @1 "..e.symbol.." < @2 > &1"
	}
end

cprogram {
	ins = { "tools/mkadfs.c" },
	outs = { "bin/mkadfs" },
}

cprogram {
	ins = { "tools/mkdfs.c" },
	outs = { "bin/mkdfs" },
}

