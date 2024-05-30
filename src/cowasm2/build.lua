local YARCHS = { "68000", "ac1082" }

for _, yarch in ipairs(YARCHS) do
	gpp {
		ins = { "src/cowasm2/arch"..yarch..".y" },
		outs = { "$OBJ/src/cowasm2/arch"..yarch..".y" },
		deps = { "src/cowasm2/prologue.yh" }
	}

	lemoncowgol {
		ins = { "$OBJ/src/cowasm2/arch"..yarch..".y" },
		outs = {
			"$OBJ/src/cowasm2/arch"..yarch..".parser.coh",
			"$OBJ/src/cowasm2/arch"..yarch..".tokens.coh",
		}
	}
end

local function build(arch, yarch)
	local deps = {}
	if yarch then
		deps = { "src/cowasm2/arch"..yarch..".coh" }
	else
		yarch = arch
	end

	for _, toolchain in ipairs(ALL_TOOLCHAINS) do
		cowgol {
			toolchain = toolchain,
			ins = concat({
				"src/cowasm2/arch"..arch..".cow",
				"src/cowasm2/cowasm2.coh",
				"src/cowasm2/emitter.coh",
				"src/cowasm2/flatemitter.coh",
				"src/cowasm2/lexer.coh",
				"src/cowasm2/symbols.coh",
				"src/cowasm2/types.coh",
				"src/cowasm2/sizing.coh",
				"$OBJ/src/cowasm2/arch"..yarch..".parser.coh",
				"$OBJ/src/cowasm2/arch"..yarch..".tokens.coh",
				}, deps),
			outs = { "bin/cowasm-"..arch },
		}
	end
end

build("ac1082")
build("68000", "68000")
build("atarist", "68000")

