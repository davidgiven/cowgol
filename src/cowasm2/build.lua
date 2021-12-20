local ARCHS = { "ac1082" }

for _, arch in ipairs(ARCHS) do
	gpp {
		ins = { "src/cowasm2/arch"..arch..".y" },
		outs = { "$OBJ/src/cowasm2/arch"..arch..".y" }
	}

	lemoncowgol {
		ins = { "$OBJ/src/cowasm2/arch"..arch..".y" },
		outs = {
			"$OBJ/src/cowasm2/arch"..arch..".parser.coh",
			"$OBJ/src/cowasm2/arch"..arch..".tokens.coh",
		}
	}

	for _, toolchain in ipairs(ALL_TOOLCHAINS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowasm2/arch"..arch..".cow",
				"src/cowasm2/types.coh",
				"src/cowasm2/lexer.coh",
				"src/cowasm2/symbols.coh",
				"src/cowasm2/emitter.coh",
				"src/cowasm2/cowasm2.coh",
				"$OBJ/src/cowasm2/arch"..arch..".parser.coh",
				"$OBJ/src/cowasm2/arch"..arch..".tokens.coh",
			},
			outs = { "bin/cowasm-"..arch }
		}
	end
end


