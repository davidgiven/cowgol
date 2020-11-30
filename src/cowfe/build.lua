local ARCHS = {
	"6502",
	"80386",
	"basic",
	"cgen",
	"pdp11",
	"16bit",
	"32bita",
}

lemoncowgol {
	ins = { "src/cowfe/parser.y" },
	outs = {
		"$OBJ/src/cowfe/parser.coh",
		"$OBJ/src/cowfe/parser.tokens.coh",
	}
}

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

