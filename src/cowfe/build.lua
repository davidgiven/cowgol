local ARCHS = { "6502i", "65c02", "6502", "z80", "8080", "80386", "cgen" }

for _, arch in ipairs(ARCHS) do
	rule {
		ins = { "src/cowfe/arch"..arch..".coh" },
		outs = { "$OBJ/cowfe-"..arch.."/arch.coh" },
		cmd = "cp @1 &1",
	}
end

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
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
				"$OBJ/cowfe-"..arch.."/arch.coh",
				"$OBJ/midcodesfe.coh",
				"$OBJ/cobout.coh",
			},
			outs = { "bin/cowfe-"..arch }
		}
	end
end

