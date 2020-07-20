for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	cowgol {
		toolchain = toolchain,
		ins = {
			"src/misc/basicify.cow"
		},
		outs = { "bin/basicify" }
	}
end


