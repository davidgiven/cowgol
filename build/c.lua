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
	local libs = {}
	for _, src in ipairs(e.ins) do
		if src:find("%.h$") then
			hdrs[#hdrs+1] = src
		end
	end

	for _, src in ipairs(e.ins) do
		if src:find("%.a$") then
			libs[#libs+1] = src
		elseif not src:find("%.h$") then
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
		ins = concat { objs, libs },
		outs = e.outs,
		cmd = "$CC -o &1 @@ "..joined(libs).." $LDFLAGS "..ldflags
	}
end

function clibrary(e)
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

	rule {
		ins = objs,
		outs = e.outs,
		cmd = "rm -f &1 && $AR qcs &1 @@"
	}
end

function cxxfile(e)
	local hdrs = {}
	for _, src in ipairs(e.ins) do
		local f = src:gsub("[^/]*$", "")
		if f == "" then
			f = "."
		end
		hdrs[#hdrs+1] = "-I"..f
	end

	local cxxflags = e.cxxflags or ""
	rule {
		ins = e.ins,
		outs = e.outs,
		cmd = "$CXX $CXXFLAGS "..cxxflags.." "..joined(hdrs).." -c -o &1 @1"
	}
end

function cxxprogram(e)
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
			local o = objdir.."/"..src:gsub("%.cc$", ".o"):gsub("%.cpp$", ".o")
			objs[#objs+1] = o
			cxxfile {
				ins = concat {
					src,
					hdrs
				},
				outs = { o },
				cxxflags = e.cxxflags,
			}
		end
	end

	local ldflags = e.ldflags or ""
	rule {
		ins = objs,
		outs = e.outs,
		cmd = "$CXX -o &1 @@ $LDFLAGS "..ldflags
	}
end


