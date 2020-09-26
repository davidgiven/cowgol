local ARCHS = { "basic", "6502i", "65c02-tiny", "65c02", "6502", "z80", "8080", "80386", "pdp11", "cgen" }

local extras = {
	["65c02"] = "src/cowbe/arch6502.cow.ng",
	["65c02-tiny"] = "src/cowbe/arch6502.cow.ng"
}

for _, arch in ipairs(ARCHS) do
	newgencowgol {
		ins = {
			"src/cowbe/arch"..arch..".cow.ng",
			extras[arch]
		},
		outs = {
			"$OBJ/cowbe-"..arch.."/inssel.coh",
			"$OBJ/cowbe-"..arch.."/inssel.decl.coh",
		}
	}
end

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowbe/main.cow",
				"include/coodecls.coh",
				"src/cowbe/allocator.coh",
				"src/cowbe/codegen.coh",
				"src/cowbe/emitter.coh",
				"src/cowbe/inputter.coh",
				"src/cowbe/midcodec.coh",
				"src/cowbe/processor.coh",
				"src/cowbe/regcache.coh",
				"src/cowbe/treewalker.coh",
				"src/cowbe/types.coh",
				"src/cowbe/utils.coh",
				"$OBJ/cowbe-"..arch.."/inssel.coh",
				"$OBJ/cowbe-"..arch.."/inssel.decl.coh",
				"$OBJ/midcodesbe.coh",
			},
			outs = { "bin/cowbe-"..arch }
		}
	end
end

