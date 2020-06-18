local ARCHS = { "65c02-tiny", "6502i", "65c02", "6502", "z80", "8080", "80386", "cgen" }

lemoncowgol {
	ins = { "src/cowfe/parser.y" },
	outs = {
		"$OBJ/src/cowfe/parser.coh",
		"$OBJ/src/cowfe/parser.tokens.coh",
	}
}

local extras = {
	["65c02"] = "src/cowfe/arch6502.cow.ng",
	["65c02-tiny"] = "src/cowfe/arch6502.cow.ng"
}

for _, arch in ipairs(ARCHS) do
	newgencowgol {
		ins = {
			"src/cowfe/arch"..arch..".cow.ng",
			extras[arch]
		},
		outs = {
			"$OBJ/cowfe-"..arch.."/inssel.coh",
			"$OBJ/cowfe-"..arch.."/inssel.decl.coh",
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
				"src/cowfe/main.cow",
				"include/coodecls.coh",
				"src/cowfe/allocator.coh",
				"src/cowfe/codegen.coh",
				"src/cowfe/emitter.coh",
				"src/cowfe/expressions.coh",
				"src/cowfe/lexer.coh",
				"src/cowfe/midcodec.coh",
				"src/cowfe/namespace.coh",
				"src/cowfe/regcache.coh",
				"src/cowfe/symbols.coh",
				"src/cowfe/treewalker.coh",
				"src/cowfe/types.coh",
				"$OBJ/src/cowfe/parser.coh",
				"$OBJ/src/cowfe/parser.tokens.coh",
				"$OBJ/cowfe-"..arch.."/inssel.coh",
				"$OBJ/cowfe-"..arch.."/inssel.decl.coh",
				"$OBJ/midcodes.coh",
			},
			outs = { "bin/cowfe-"..arch }
		}
	end
end

