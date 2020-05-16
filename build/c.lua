function cfile(e)
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
		cmd = "$CC $CFLAGS "..cflags.." "..joined(hdrs).." -c -o &1 @1"
	}
end

function cprogram(e)
	local objdir = e.objdir or "$OBJ"
	local objs = {}
	local hdrs = {}
	for _, src in ipairs(e.ins) do
		if src:find("%.h$") then
			hdrs[#hdrs+1] = src
		end
	end

	for _, src in ipairs(e.ins) do
		if not src:find("%.h$") then
			local o = objdir.."/"..src:gsub("%.c$", ".o"):gsub("%.cpp$", ".o")
			objs[#objs+1] = o
			cfile {
				ins = concat {
					src,
					hdrs
				},
				outs = { o },
				cflags = e.cflags,
			}
		end
	end

	local ldflags = e.ldflags or ""
	rule {
		ins = objs,
		outs = e.outs,
		cmd = "$CC -o &1 @@ $LDFLAGS "..ldflags
	}
end


