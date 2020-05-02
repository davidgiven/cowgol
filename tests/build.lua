include "src/build.lua"

local files = filenamesof("./*.test.cow")
local alltests = {}
for _, file in ipairs(files) do
	local base = file:gsub("%.test%.cow$", "")
	for _, toolchain in ipairs(vars.toolchains) do
		local coo = cowgol {
			name = base.."-"..toolchain.."-coo",
			toolchain = toolchain,
			srcs = { file }
		}

		local exe = cowlink {
			name = base.."-"..toolchain.."-exe",
			toolchain = toolchain,
			srcs = { coo }
		}

		local test = runtest {
			name = base.."-"..toolchain.."-test",
			toolchain = toolchain,
			exe = { exe },
			goodfile = { base..".good" }
		}

		alltests[#alltests+1] = test
	end
end

normalrule {
	name = "tests",
	outleaves = {"stamp"},
	ins = alltests,
	commands = {
		"touch %{outs}"
	}
}

