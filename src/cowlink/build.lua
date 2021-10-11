local ARCHS = {
	"8080",
	"ataritos",
	"basic",
	"bbct",
	"bbctn",
	"cgen",
	"fuzix6303",
	"lx386",
	"lx68k",
	"lxppc",
	"lxthumb2",
	"msdos",
	"rt11",
	"v7unix",
}

for _, arch in ipairs(ARCHS) do
	rule {
		ins = { "src/cowlink/arch"..arch..".coh" },
		outs = { "$OBJ/cowlink-"..arch.."/archlink.coh" },
		cmd = "cp @1 &1",
	}
end

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowlink/main.cow",
				"include/coodecls.coh",
				"$OBJ/cowlink-"..arch.."/archlink.coh",
				"src/cowlink/asmwrite.coh",
				"src/cowlink/cooread.coh",
				"src/cowlink/emitter.coh",
				"src/cowlink/graph.coh",
				"src/cowlink/streams.coh",
				"src/cowlink/types.coh",
				"src/cowlink/utils.coh",
			},
			outs = { "bin/cowlink-"..arch }
		}
	end
end

