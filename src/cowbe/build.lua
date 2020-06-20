local ARCHS = { "65c02-tiny", "6502i", "65c02", "6502", "z80", "8080", "80386", "cgen" }

lemoncowgol {
	ins = { "src/cowbe/parser.y" },
	outs = {
		"$OBJ/src/cowbe/parser.coh",
		"$OBJ/src/cowbe/parser.tokens.coh",
	}
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
	local archs = toolchain.archs
	if not archs then
		archs = ARCHS
	end
	for _, arch in ipairs(archs) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowbe/main.cow",
				"include/coodecls.coh",
				"src/cowbe/allocator.coh",
				"src/cowbe/codegen.coh",
				"src/cowbe/emitter.coh",
				"src/cowbe/expressions.coh",
				"src/cowbe/lexer.coh",
				"src/cowbe/midcodec.coh",
				"src/cowbe/namespace.coh",
				"src/cowbe/regcache.coh",
				"src/cowbe/symbols.coh",
				"src/cowbe/treewalker.coh",
				"src/cowbe/types.coh",
				"$OBJ/src/cowbe/parser.coh",
				"$OBJ/src/cowbe/parser.tokens.coh",
				"$OBJ/cowbe-"..arch.."/inssel.coh",
				"$OBJ/cowbe-"..arch.."/inssel.decl.coh",
				"$OBJ/midcodes.coh",
			},
			outs = { "bin/cowbe-"..arch }
		}
	end
end

