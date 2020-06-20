for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	cowgol {
		toolchain = toolchain,
		ins = {
			"src/cowbdmp/main.cow",
			"src/cowbdmp/types.coh",
			"src/cowbe/inputter.coh",
			"src/cowbe/utils.coh",
			"$OBJ/cobin.coh",
			"$OBJ/midcodesbe.coh",
		},
		outs = { "bin/cowbdmp" }
	}
end

