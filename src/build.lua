rule {
	ins = {
		"scripts/mkiburgcodes.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.tab",
	},
	outs = { "$OBJ/iburgcodes.h" },
	cmd = "$LUA @1 -- @3 &1"
}

rule {
	ins = {
		"scripts/mkiburgcodes.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.coh.tab",
	},
	outs = { "$OBJ/iburgcodes-coh.h" },
	cmd = "$LUA @1 -- @3 &1"
}

rule {
	ins = {
		"scripts/mkmidcodesh.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.tab",
	},
	outs = { "$OBJ/midcodes.h" },
	cmd = "$LUA @1 -- @3 &1"
}

rule {
	ins = {
		"scripts/mkmidcodesc.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.tab",
	},
	outs = { "$OBJ/midcodes.c" },
	cmd = "$LUA @1 -- @3 &1"
}

rule {
	ins = {
		"scripts/mkmidcodescoh.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.tab",
	},
	outs = { "$OBJ/midcodes.coh" },
	cmd = "$LUA @1 -- @3 &1"
}

function uncoo(e)
	rule {
		ins = concat {
			"scripts/uncoo.lua",
			e.ins
		},
		outs = e.outs,
		cmd = "$LUA @1 @2 &1"
	}
end

function buildcgen(e)
	cprogram {
		ins = concat {
			e.ins,
			"rt/cgen/cowgol.h",
		},
		outs = e.outs
	}
end

function buildgas(arch, e)
	local obj = e.outs[1]:gsub("%.[^.]*$", ".o")
	rule {
		ins = e.ins,
		outs = { obj },
		cmd = arch.."-as -g @1 -o &1"
	}

	rule {
		ins = { obj },
		outs = e.outs,
		cmd = arch.."-ld -g @1 -o &1"
	}
end

function buildgas386(e)
	return buildgas("i686-linux-gnu", e)
end

function buildgasarm(e)
	return buildgas("arm-linux-gnueabihf", e)
end

function buildzmac(e)
	local cim = e.outs[1]:gsub("%.[^.]*$", ".cim")
	zmac {
		ins = e.ins,
		outs = { cim }
	}

	rule {
		ins = { cim },
		outs = e.outs,
		cmd = "cp @1 &1"
	}
end

function cowgol(e)
	local out = e.outs[1].."."..e.toolchain.name..e.toolchain.binext
	local coo = out:gsub("%.[^.]*$", ".coo")
	local asm = out:gsub("%.[^.]*$", e.toolchain.asmext)

	rule {
		ins = concat {
			e.toolchain.compiler,
			e.ins,
		},
		outs = { coo },
		cmd = "@1 -Irt/ -I"..e.toolchain.runtime.."/ -o &1 @2"
	}

	e.toolchain.linker {
		ins = { coo },
		outs = { asm }
	}

	e.toolchain.assembler {
		ins = { asm },
		outs = { out }
	}
end

--include "third_party/zmac/build.lua"
--
--definerule("cowgol",
--	{
--		srcs = { type="targets" },
--		toolchain = { type="string" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return _G["compile-"..e.toolchain] {
--			name = e.name,
--			srcs = e.srcs,
--			deps = e.deps,
--		}
--	end
--)
--
--definerule("cowlink",
--	{
--		srcs = { type="targets" },
--		toolchain = { type="string" },
--	},
--	function (e)
--		return _G["link-"..e.toolchain] {
--			name = e.name,
--			srcs = e.srcs
--		}
--	end
--)
--
--definerule("runtest",
--	{
--		exe = { type="targets" },
--		toolchain = { type="string" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return _G["runtest-"..e.toolchain] {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile
--		}
--	end
--)
--
--definerule("oldcom",
--	{
--		srcs = { type="targets" },
--		rtdir = { type="string" },
--		arch = { type="string" },
--		deps = { type="targets", default={} },
--		compiler = { type="string", default="src/oldcom+oldcom" },
--	},
--	function (e)
--		local includes = {}
--		for _, f in ipairs(filenamesof(e.deps)) do
--			includes[#includes+1] = "-I"..dirname(f).."/"
--		end
--		includes = uniquify(includes)
--
--		local coo = normalrule {
--			name = e.name.."-coo",
--			ins = {
--				e.compiler.."-"..e.arch,
--				e.srcs,
--				"rt/*.coh",
--				"rt/"..e.rtdir.."/*.coh",
--				e.deps
--			},
--			outleaves = { e.name..".coo" },
--			commands = {
--				"scripts/quiet %{ins[1]} -Irt/ -Irt/"..e.rtdir.."/ %{hdrpaths} %{ins[2]} %{outs[1]}"
--			},
--			vars = {
--				hdrpaths = includes
--			}
--		}
--		return coo
--	end
--)
--
--definerule("uncoo",
--	{
--		srcs = { type="targets" },
--		extension = { type="string" },
--	},
--	function (e)
--		return normalrule {
--			name = e.name,
--			ins = {
--				"scripts/uncoo.lua",
--				e.srcs
--			},
--			outleaves = { e.name.."."..e.extension },
--			commands = {
--				"lua %{ins[1]} %{ins[2]} %{outs[1]}"
--			}
--		}
--	end
--)
--				
--definerule("simpletest",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--		runcmd = { type="string" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return normalrule {
--			name = e.name,
--			ins = {
--				e.exe,
--				e.goodfile,
--				e.deps
--			},
--			outleaves = { e.name..".bad" },
--			commands = {
--				"timeout 5s "..e.runcmd.." %{ins[1]} > %{outs[1]}",
--				"diff -u %{ins[2]} %{outs[1]}"
--			}
--		}
--	end
--)
--
--definerule("compile-oldcom-cpm-8080",
--	{
--		srcs = { type="targets" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return oldcom {
--			name = e.name,
--			srcs = e.srcs,
--			rtdir = "cpm",
--			arch = "8080",
--			deps = e.deps,
--		}
--	end
--)
--
--definerule("link-oldcom-cpm-8080",
--	{
--		srcs = { type="targets" },
--	},
--	function (e)
--		local asm = uncoo {
--			name = e.name.."-asm",
--			srcs = e.srcs,
--			extension = "asm"
--		}
--
--		return zmac {
--			name = e.name,
--			relocatable = false,
--			srcs = { asm },
--			deps = {
--				"rt/cpm/cowgol.inc",
--				"rt/cpm/tail.inc",
--			}
--		}
--	end
--)
--
--definerule("runtest-oldcom-cpm-8080",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return simpletest {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile,
--			deps = { "tools/cpmemu+cpmemu" },
--			runcmd = "%{ins[3]}"
--		}
--	end
--)
--
--definerule("compile-oldcom-linux-80386",
--	{
--		srcs = { type="targets" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return oldcom {
--			name = e.name,
--			srcs = e.srcs,
--			rtdir = "80386-linux",
--			arch = "80386",
--			deps = e.deps,
--		}
--	end
--)
--
--definerule("link-oldcom-linux-80386",
--	{
--		srcs = { type="targets" },
--	},
--	function (e)
--		local asm = uncoo {
--			name = e.name.."-asm",
--			srcs = {
--				e.srcs,
--				"rt/80386-linux/cowgol.inc",
--			},
--			extension = "s"
--		}
--
--		local obj = normalrule {
--			name = e.name.."-o",
--			ins = { asm },
--			outleaves = { e.name..".o" },
--			commands = {
--				"i686-linux-gnu-as -g %{ins[1]} -o %{outs[1]}"
--			}
--		}
--
--		return normalrule {
--			name = e.name,
--			ins = { obj },
--			outleaves = { e.name..".386" },
--			commands = {
--				"i686-linux-gnu-ld -g %{ins[1]} -o %{outs[1]}"
--			}
--		}
--	end
--)
--
--definerule("runtest-oldcom-linux-80386",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return simpletest {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile,
--			runcmd = "qemu-i386"
--		}
--	end
--)
--
--definerule("compile-oldcom-linux-thumb2",
--	{
--		srcs = { type="targets" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return oldcom {
--			name = e.name,
--			srcs = e.srcs,
--			rtdir = "thumb2-linux",
--			arch = "thumb2",
--			deps = e.deps,
--		}
--	end
--)
--
--definerule("link-oldcom-linux-thumb2",
--	{
--		srcs = { type="targets" },
--	},
--	function (e)
--		local asm = uncoo {
--			name = e.name.."-asm",
--			srcs = {
--				e.srcs,
--				"rt/thumb2-linux/cowgol.inc",
--			},
--			extension = "s"
--		}
--
--		local obj = normalrule {
--			name = e.name.."-o",
--			ins = { asm },
--			outleaves = { e.name..".o" },
--			commands = {
--				"arm-linux-gnueabihf-as -g %{ins[1]} -o %{outs[1]}"
--			}
--		}
--
--		return normalrule {
--			name = e.name,
--			ins = { obj },
--			outleaves = { e.name..".386" },
--			commands = {
--				"arm-linux-gnueabihf-ld -g %{ins[1]} -o %{outs[1]}"
--			}
--		}
--	end
--)
--
--definerule("runtest-oldcom-linux-thumb2",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return simpletest {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile,
--			runcmd = "qemu-arm"
--		}
--	end
--)
--
--definerule("compile-oldcom-cgen",
--	{
--		srcs = { type="targets" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return oldcom {
--			name = e.name,
--			srcs = e.srcs,
--			rtdir = "cgen",
--			arch = "cgen",
--			deps = e.deps,
--		}
--	end
--)
--
--definerule("link-oldcom-cgen",
--	{
--		srcs = { type="targets" },
--	},
--	function (e)
--		local c = uncoo {
--			name = e.name.."-c",
--			srcs = e.srcs,
--			extension = "c"
--		}
--
--		return cprogram {
--			name = e.name,
--			srcs = { c },
--			deps = { "rt/cgen/cowgol.h" },
--			vars = {
--				["+cflags"] = "-Irt/cgen"
--			}
--		}
--	end
--)
--
--definerule("runtest-oldcom-cgen",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return simpletest {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile,
--			runcmd = ""
--		}
--	end
--)
--
--definerule("compile-cowcom-cpm-8080",
--	{
--		srcs = { type="targets" },
--		deps = { type="targets", default={} },
--	},
--	function (e)
--		return oldcom {
--			name = e.name,
--			srcs = e.srcs,
--			rtdir = "cpm",
--			arch = "8080",
--			deps = e.deps,
--			compiler = "src/cowcom+cowcom-oldcom-cgen"
--		}
--	end
--)
--
--definerule("link-cowcom-cpm-8080",
--	{
--		srcs = { type="targets" },
--	},
--	function (e)
--		local asm = uncoo {
--			name = e.name.."-asm",
--			srcs = e.srcs,
--			extension = "asm"
--		}
--
--		return zmac {
--			name = e.name,
--			relocatable = false,
--			srcs = { asm },
--			deps = {
--				"rt/cpm/cowgol.inc",
--				"rt/cpm/tail.inc",
--			}
--		}
--	end
--)
--
--definerule("runtest-cowcom-cpm-8080",
--	{
--		exe = { type="targets" },
--		goodfile = { type="targets" },
--	},
--	function (e)
--		return simpletest {
--			name = e.name,
--			exe = e.exe,
--			goodfile = e.goodfile,
--			deps = { "tools/cpmemu+cpmemu" },
--			runcmd = "%{ins[3]}"
--		}
--	end
--)
--
--
