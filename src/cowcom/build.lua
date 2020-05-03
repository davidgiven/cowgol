include "tools/newgen/build.lua"
include "third_party/lemon/build.lua"
include "src/build.lua"

local ARCHS = { "8080" }

lemoncowgol {
	name = "parser",
	srcs = { "./parser.y" }
}

local installables = {}
for _, arch in ipairs(ARCHS) do
	local ng = newgencowgol {
		name = "arch-"..arch,
		srcs = { "./arch"..arch..".cow.ng" }
	}

	for _, toolchain in ipairs(vars.toolchains) do
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
			name = "cowcom-"..toolchain.."-"..arch.."-exe",
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

