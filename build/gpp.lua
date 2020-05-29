function gpp(e)
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
		cmd = "gpp -U '' '' '(' ',' ')' '(' ')' '$$' '' -M '$$' '\\n' ' ' ' ' '\\n' '(' ')' "..
			cflags.." "..joined(hdrs).." -o &1 @1"
	}
end


