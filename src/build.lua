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
		"scripts/mkmidcodescoh.lua",
		"scripts/libcowgol.lua",
		"src/midcodes.coh.tab",
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
	local obj = e.outs[1]:ext(".o"):obj()
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
	local cim = e.outs[1]:ext(".cim"):obj()
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

function buildxa65(e)
	local img = e.outs[1]:ext(".img"):obj()
	xa65 {
		ins = e.ins,
		outs = e.outs,
	}
end

function simpletest(interpreter, e)
	local badfile = e.ins[1]:ext(".bad")
	rule {
		ins = e.ins,
		outs = { badfile },
		cmd = "timeout 5s "..interpreter.." @1 > &1 && diff -u -w &1 "..e.goodfile,
	}
end

function nativetest(e)
	return simpletest("", e)
end

function qemu386test(e)
	return simpletest("qemu-i386", e)
end

function qemuarmtest(e)
	return simpletest("qemu-arm", e)
end

function cpmtest(e)
	e.ins = concat { e.ins, "bin/cpmemu" }
	return simpletest("bin/cpmemu", e)
end

function tubeemutest(e)
	e.ins = concat { e.ins, "bin/tubeemu" }
	return simpletest("bin/tubeemu", e)
end

function cowgol(e)
	local out = e.outs[1].."."..e.toolchain.name..e.toolchain.binext
	local coo = out:ext(".coo"):obj()
	local asm = out:ext(e.toolchain.asmext):obj()

	local hdrs = {}
	for _, src in ipairs(e.ins) do
		local f = src:gsub("[^/]*$", "")
		if f == "" then
			f = "."
		end
		hdrs[#hdrs+1] = "-I"..f
	end

	rule {
		ins = concat {
			e.toolchain.compiler,
			e.ins,
			"scripts/quiet",
			"rt/common-file.coh",
			"rt/common.coh",
			"rt/malloc.coh",
			"rt/strings.coh",
		},
		outs = { coo },
		cmd = "scripts/quiet @1 -Irt/ -I"..e.toolchain.runtime.."/ "..joined(hdrs).." @2 &1"
	}

	rule {
		ins = concat {
			"scripts/quiet",
			e.toolchain.linker,
			(e.toolchain.runtime.."/cowgol.coo"):obj(),
			coo
		},
		outs = { asm },
		cmd = "@1 @2 -o &1 @3 @4"
	}

	e.toolchain.assembler {
		ins = { asm },
		outs = { out }
	}

	return out
end

function cowwrap(e)
	rule {
		ins = concat {
			"scripts/quiet",
			"bin/cowwrap.bootstrap.exe",
			e.ins
		},
		outs = e.outs,
		cmd = "@1 @2 @3 &1"
	}
end

