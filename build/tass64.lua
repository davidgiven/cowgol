function tass64(e)
	local hdrs = {}
	for _, src in ipairs(e.ins) do
		local f = src:gsub("[^/]*$", "")
		if f == "" then
			f = "."
		end
		hdrs[#hdrs+1] = "-I"..f
	end

	local cflags = e.cflags or ""
	local obj = e.outs[1]
	local lst = obj:ext(".lst")
	rule {
		ins = e.ins,
		outs = concat { obj, lst },
		cmd = "64tass --quiet --long-branch --ascii --case-sensitive --nostart -o &1 -L &2 @1"
	}
end



