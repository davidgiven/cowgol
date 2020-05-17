local function env(var, default)
	return os.getenv(var) or default
end

print("OBJ = "..env("OBJ", ".obj"))
print("LUA = "..env("LUA", "lua5.1"))
print("CC = "..env("CC", "cc"))
print("CFLAGS = "..env("CFLAGS", ""))
print("LDFLAGS = "..env("LDFLAGS", ""))
print("rule build");
print("  command = $command");
print("")

function include(filename)
	io.stderr:write("loading ", filename, "\n")
	local fp, e = io.open(filename)
	if not e then
		local data
		data, e = fp:read("*a")
		fp:close();
		if not e then
			local chunk
			chunk, e = loadstring(data, "@"..filename)
			if not e then
				chunk()
			end
		end
	end
	if e then
		error(string.format("coudn't load %s: %s", filename, e))
	end
end

function string:obj()
	if not self:find("^%$") then
		return "$OBJ/"..self
	end
	return self
end

function string:ext(newext)
	return self:gsub("%.[^.]*$", newext)
end

function concat(...)
	local result = {}

	local function recurse(t)
		for _, i in ipairs(t) do
			if type(i) == "table" then
				recurse(i)
			else
				result[#result+1] = i
			end
		end
	end
	recurse({...})
	return result
end

function joined(t)
	local m = {}
	for _, i in ipairs(t) do
		m[i] = true
	end
	t = {}
	for i in pairs(m) do
		t[#t+1] = i
	end
	return table.concat(t, " ")
end

function rule(e)
	print(string.format("build %s: build %s",
		table.concat(e.outs, " "),
		table.concat(e.ins, " ")))
	local cmd = e.cmd
		:gsub("@(%d+)", function (n) return e.ins[tonumber(n)] end)
		:gsub("@@", table.concat(e.ins, " "))
		:gsub("&(%d+)", function (n) return e.outs[tonumber(n)] end)

	print("  command = "..cmd)
	print("")
end

OLDCOM_ARCHS = { "8080", "80386", "thumb2", "cgen" }

include "build/c.lua"
include "build/yacc.lua"
include "tools/build.lua"
include "third_party/zmac/build.lua"
include "tools/cpmemu/build.lua"
include "tools/tubeemu/build.lua"
include "third_party/lemon/build.lua"
include "tools/newgen/build.lua"
include "src/build.lua"
include "src/oldcom/build.lua"
include "toolchains.lua"
include "src/cowlink/build.lua"
include "src/cowcom/build.lua"
include "src/cowwrap/build.lua"
include "tests/build.lua"

