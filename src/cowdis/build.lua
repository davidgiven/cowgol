local ARCHS = { "tlcs90" }

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowdis/arch"..arch..".cow",
			},
			outs = { "bin/cowdis-"..arch }
		}
	end
end

