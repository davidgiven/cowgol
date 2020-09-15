cprogram {
	ins = {
		"third_party/macro11/macro11.c",
		"third_party/macro11/assemble.c",
		"third_party/macro11/assemble_globals.c",
		"third_party/macro11/assemble_aux.c",
		"third_party/macro11/extree.c",
		"third_party/macro11/listing.c",
		"third_party/macro11/macros.c",
		"third_party/macro11/parse.c",
		"third_party/macro11/rept_irpc.c",
		"third_party/macro11/symbols.c",
		"third_party/macro11/mlb.c",
		"third_party/macro11/object.c",
		"third_party/macro11/stream2.c",
		"third_party/macro11/util.c",
		"third_party/macro11/rad50.c",
	},
	outs = {
		"bin/macro11"
	}
}

function macro11(e)
	local hdrs = {}
	for _, src in ipairs(e.ins) do
		local f = src:gsub("[^/]*$", "")
		if f == "" then
			f = "."
		end
		hdrs[#hdrs+1] = "-I"..f
	end

	local cflags = e.cflags or ""
	rule {
		ins = concat {
			"bin/macro11",
			e.ins,
		},
		outs = e.outs,
		cmd = "@1 -yus -ysl 16 -rt11 -m SYSMAC.SML -d ME -o &1 @2"
	}
end


