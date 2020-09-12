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
		ins = e.ins,
		outs = e.outs,
		cmd = "macro11 -yus -ysl 16 -rt11 -m SYSMAC.SML -d ME -o &1 @1"
	}
end

