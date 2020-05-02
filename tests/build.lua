include "src/build.lua"

for _, toolchain in ipairs(vars.toolchains) do
	cowgol {
		name = "addsub-8bit-"..toolchain,
		toolchain = toolchain,
		srcs = { "./addsub-8bit.test.cow" }
	}
end

