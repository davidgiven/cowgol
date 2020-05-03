include "tools/newgen/build.lua"
include "third_party/lemon/build.lua"
include "src/build.lua"

local ARCHS = { "8080" }

local installables = {}
for _, arch in ipairs(ARCHS) do
	for _, toolchain in ipairs(vars.toolchains) do
		local coo = cowgol {
			name = "cowlink-"..toolchain.."-"..arch.."-coo",
			srcs = { "./main.cow" },
			deps = {
				"./*.coh",
			},
			toolchain = toolchain
		}

		local exe = cowlink {
			name = "cowlink-"..toolchain.."-"..arch.."-exe",
			srcs = { coo },
			toolchain = toolchain
		}
		
		installables["bin/cowlink-"..toolchain.."-"..arch] = exe
	end
end

installable {
	name = "all-cowlinks",
	map = installables
}

