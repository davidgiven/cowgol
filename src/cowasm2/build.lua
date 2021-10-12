local ARCHS = { "ac1082" }

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowasm2/main.cow",
			},
			outs = { "bin/cowasm-"..arch }
		}
	end
end


