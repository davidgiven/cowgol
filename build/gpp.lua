function gpp(e)
	local ins = concat(e.ins, e.deps)
	local hdrs = {}
	for _, src in ipairs(ins) do
		local f = src:gsub("[^/]*$", "")
		if f == "" then
			f = "."
		end
		hdrs[#hdrs+1] = "-I"..f
	end

	local cflags = e.cflags or ""
	rule {
		ins = ins,
		outs = e.outs,
		cmd = "gpp --nostdinc -U '' '' '(' ',' ')' '(' ')' '$$' '' -M '$$' '\\n' ' ' ' ' '\\n' '(' ')' "..
			cflags.." "..joined(hdrs).." -o &1 @1"
	}
end


