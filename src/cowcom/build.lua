local ARCHS = { "6502", "z80", "8080", "80386", "cgen" }

lemoncowgol {
	ins = { "src/cowcom/parser.y" },
	outs = {
		"$OBJ/src/cowcom/parser.coh",
		"$OBJ/src/cowcom/parser.tokens.coh",
	}
}

local extras = {
	["6502"] = "$OBJ/src/cowcom/arch6502.ng.h"
}

rule {
	ins = { "src/cowcom/arch6502.lua" },
	outs = { "$OBJ/src/cowcom/arch6502.ng.h" },
	cmd = "$LUA @1 > &1"
}

for _, arch in ipairs(ARCHS) do
	newgencowgol {
		ins = {
			"src/cowcom/arch"..arch..".cow.ng",
			extras[arch]
		},
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
				"src/cowcom/namespace.coh",
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

