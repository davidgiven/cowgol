for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	cowgol {
		toolchain = toolchain,
		ins = {
			"src/cowbdmp/main.cow",
			"src/cowbdmp/inputter.coh",
			"src/cowbdmp/types.coh",
			"src/cowbdmp/utils.coh",
			"$OBJ/cobin.coh",
			"$OBJ/midcodesbe.coh",
		},
		outs = { "bin/cowbdmp" }
	}
end

