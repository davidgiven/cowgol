local ARCHS = { "8080" }

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowlink/main.cow",
				"src/cowlink/asmwrite.coh",
				"src/cowlink/cooread.coh",
				"src/cowlink/graph.coh",
				"src/cowlink/utils.coh",
			},
			outs = { "bin/cowlink."..arch }
		}
	end
end

