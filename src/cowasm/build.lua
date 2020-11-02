local ARCHS = { "8080", "pdp11", "6303" }

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowasm/arch"..arch..".cow",
				"src/cowasm/cowasm.coh",
				"src/cowasm/stdsyms.coh",
			},
			outs = { "bin/cowasm-"..arch }
		}
	end
end

