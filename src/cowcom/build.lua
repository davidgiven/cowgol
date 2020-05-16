local ARCHS = { "8080" }

lemoncowgol {
	ins = { "src/cowcom/parser.y" },
	outs = {
		"$OBJ/src/cowcom/parser.coh",
		"$OBJ/src/cowcom/parser.tokens.coh",
	}
}

for _, arch in ipairs(ARCHS) do
	newgencowgol {
		ins = { "src/cowcom/arch"..arch..".cow.ng" },
		outs = {
			"$OBJ/cowcom-"..arch.."/inssel.coh",
			"$OBJ/cowcom-"..arch.."/inssel.decl.coh",
		}
	}
end

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowcom/main.cow",
				"src/cowcom/codegen.coh",
				"src/cowcom/emitter.coh",
				"src/cowcom/expressions.coh",
				"src/cowcom/lexer.coh",
				"src/cowcom/midcodec.coh",
				"src/cowcom/symbols.coh",
				"src/cowcom/types.coh",
				"$OBJ/src/cowcom/parser.coh",
				"$OBJ/src/cowcom/parser.tokens.coh",
				"$OBJ/cowcom-"..arch.."/inssel.coh",
				"$OBJ/cowcom-"..arch.."/inssel.decl.coh",
				"$OBJ/midcodes.coh",
			},
			outs = { "bin/cowcom."..arch }
		}
	end
end

--[[
local installables = {}
for _, arch in ipairs(ARCHS) do
	local ng = newgencowgol {
		name = "arch-"..arch,
		srcs = { "./arch"..arch..".cow.ng" }
	}

	for _, toolchain in ipairs({"oldcom-cgen", "oldcom-cpm-8080"}) do
		local coo = cowgol {
			name = "cowcom-"..toolchain.."-"..arch.."-coo",
			srcs = { "./main.cow" },
			deps = {
				"./*.coh",
				"+parser",
				ng,
				"scripts+midcodes_coh",
			},
			toolchain = toolchain
		}

		local exe = cowlink {
			name = "cowcom-"..toolchain.."-"..arch,
			srcs = { coo },
			toolchain = toolchain
		}
		
		installables["bin/cowcom-"..toolchain.."-"..arch] = exe
	end
end

installable {
	name = "all-cowcoms",
	map = installables
}
local ARCHS = { "8080" }

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, arch in ipairs(ARCHS) do
		cowgol {
			toolchain = toolchain,
			ins = {
				"src/cowlink/main.cow",
				"src/cowlink/cooread.coh",
				"src/cowlink/graph.coh",
				"src/cowlink/utils.coh",
			},
			outs = { "bin/cowlink."..arch }
		}
	end
end

--]]

