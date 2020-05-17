for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	cowgol {
		toolchain = toolchain,
		ins = {
			"src/cowwrap/main.cow",
			"src/cowwrap/emitter.coh",
			"src/cowwrap/reader.coh",
		},
		outs = { "bin/cowwrap" },
	}
end

