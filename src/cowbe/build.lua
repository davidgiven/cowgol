local ARCHS = {
	"6303",
	"6502",
	"6502i",
	"65c02",
	"65c02-tiny",
	"80386",
	"8080",
	"8086",
	"basic",
	"cgen",
	"pdp11",
	"powerpc",
	"thumb2",
	"z80",
}

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

