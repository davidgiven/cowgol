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

function mkdfs(e)
	local ins = {}
	for _, f in ipairs(e.ins) do
		if not f:find("^-") then
			ins[#ins+1] = f
		end
	end

	rule {
		ins = concat {
			"bin/mkdfs",
			ins,
		},
		outs = e.outs,
		cmd = "@1 -O &1 "..table.concat(e.ins, " ")
	}
end

