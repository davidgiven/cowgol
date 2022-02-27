local function env(var, default)
	return os.getenv(var) or default
end

print("OBJ = "..env("OBJ", ".obj"))
print("LUA = "..env("LUA", "lua5.1"))
print("CC = "..env("CC", "cc"))
print("CXX = "..env("CC", "c++"))
print("CPP = "..env("CC", "cpp"))
print("AR = "..env("AR", "ar"))
print("CFLAGS = "..env("CFLAGS", ""))
print("CXXFLAGS = "..env("CXXFLAGS", "$CFLAGS"))
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

function string:dir()
	return self:gsub("[^/]*$", "")
end

function string:leaf()
	return self:gsub("^.*/", "")
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
	table.sort(t)
	return table.concat(t, " ")
end

function set(t)
	local s = {}
	for _, k in ipairs(t) do
		s[k] = true
	end
	return s
end

function command_present(name)
	return os.execute("command -v "..name.." >/dev/null") ~= false
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

function addto(t, v)
	t[#t+1] = v
end

function enable_if(name, command)
	local v = command_present(command)
	if not v then
		io.stderr:write(name.." is 0 as "..command.." is not present\n")
	end
	_G[name] = v
end

enable_if("WITH_ATARITOS", "m68k-atari-mint-as")
enable_if("WITH_MSDOS", "nasm")
enable_if("WITH_LX386", "i686-linux-gnu-as")
enable_if("WITH_LX68K", "m68k-linux-gnu-as")
enable_if("WITH_LXTHUMB2", "arm-linux-gnueabihf-as")
enable_if("WITH_LXPPC", "powerpc-linux-gnu-as")

include "build/c.lua"
include "build/yacc.lua"
include "build/gpp.lua"
include "build/tass64.lua"
include "build/utils.lua"
include "tools/build.lua"
include "third_party/emu2/build.lua"
include "third_party/apout/build.lua"
include "third_party/zmac/build.lua"
include "third_party/djlink/build.lua"
include "third_party/musashi/build.lua"
include "tools/cpmemu/build.lua"
include "tools/tubeemu/build.lua"
include "tools/fuzix6303emu/build.lua"
include "tools/lx68kemu/build.lua"
include "tools/ataritosemu/build.lua"
include "tools/obpemu/build.lua"
include "tools/tlcs90emu/build.lua"
include "third_party/lemon/build.lua"
include "tools/newgen/build.lua"
include "src/build.lua"
include "bootstrap/build.lua"
include "toolchains.lua"
include "src/cowlink/build.lua"
include "src/cowfe/build.lua"
include "src/cowbe/build.lua"
include "src/cowwrap/build.lua"
include "src/cowbdmp/build.lua"
include "src/cowasm/build.lua"
include "src/cowasm2/build.lua"
include "src/cowdis/build.lua"
include "src/misc/build.lua"
include "rt/ataritos/build.lua"
include "rt/cpm/build.lua"
include "rt/cpmz/build.lua"
include "rt/cgen/build.lua"
include "rt/lx386/build.lua"
include "rt/lx68k/build.lua"
include "rt/lxthumb2/build.lua"
include "rt/lxppc/build.lua"
include "rt/bbct/build.lua"
include "rt/bbcti/build.lua"
include "rt/unixv7/build.lua"
include "rt/fuzix6303/build.lua"
include "rt/msdos/build.lua"
include "examples/build.lua"
include "tests/build.lua"
include "dist/bbct/build.lua"
include "dist/cpm/build.lua"
include "dist/cpmz/build.lua"
include "dist/cpmbasic/build.lua"
include "dist/msdos/build.lua"
include "dist/ataritos/build.lua"


