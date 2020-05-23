local ARCHS = { "8080", "z80" }

lemoncowgol {
	ins = { "src/cowcom/parser.y" },
	outs = {
		"$OBJ/src/cowcom/parser.coh",
		"$OBJ/src/cowcom/parser.tokens.coh",
	}
}

for _, arch in ipairs(ARCHS) do
	newgencowgol {
		ins = { "src/cowcom/arch"..arch..".cow.ng" },
		outs = {
			"$OBJ/cowcom-"..arch.."/inssel.coh",
			"$OBJ/cowcom-"..arch.."/inssel.decl.coh",
		}
	}
end

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowcom/main.cow",
				"include/coodecls.coh",
				"src/cowcom/codegen.coh",
				"src/cowcom/emitter.coh",
				"src/cowcom/expressions.coh",
				"src/cowcom/lexer.coh",
				"src/cowcom/midcodec.coh",
				"src/cowcom/regcache.coh",
				"src/cowcom/symbols.coh",
				"src/cowcom/types.coh",
				"$OBJ/src/cowcom/parser.coh",
				"$OBJ/src/cowcom/parser.tokens.coh",
				"$OBJ/cowcom-"..arch.."/inssel.coh",
				"$OBJ/cowcom-"..arch.."/inssel.decl.coh",
				"$OBJ/midcodes.coh",
			},
			outs = { "bin/cowcom."..arch }
		}
	end
end

