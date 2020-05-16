ALL_TESTS = {
	"addsub-16bit",
	"addsub-32bit",
	"addsub-8bit",
	"arrayinitialisers",
	"case",
	"casts",
	"conditionals",
	"divrem-16bit-s",
	"divrem-16bit-u",
	"divrem-32bit-s",
	"divrem-32bit-u",
	"divrem-8bit-s",
	"divrem-8bit-u",
	"inputparams",
	"itoa",
	"logic-16bit",
	"logic-32bit",
	"logic-8bit",
	"loops",
	"mul-16bit-s",
	"mul-16bit-u",
	"mul-32bit-s",
	"mul-32bit-u",
	"mul-8bit-s",
	"mul-8bit-u",
	"outputparams",
	"pointers",
	"rangetypes",
	"recordinitialisers",
	"records",
	"shifts-16bit",
	"shifts-32bit",
	"shifts-8bit",
	"unions",
}

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, test in ipairs(ALL_TESTS) do
		local exe = cowgol {
			toolchain = toolchain,
			ins = {
				"tests/"..test..".test.cow",
				"tests/_framework.coh",
			},
			outs = { "$OBJ/tests/"..test }
		}

		toolchain.tester {
			ins = { exe },
			goodfile = "tests/"..test..".good"
		}
	end
end

--include "src/build.lua"
--
--local files = filenamesof("./*.test.cow")
--local alltests = {}
--for _, file in ipairs(files) do
--	local base = file:gsub("%.test%.cow$", "")
--	for _, toolchain in ipairs(vars.toolchains) do
--		local coo = cowgol {
--			name = base.."-"..toolchain.."-coo",
--			toolchain = toolchain,
--			srcs = { file },
--			deps = { "./_framework.coh" }
--		}
--
--		local exe = cowlink {
--			name = base.."-"..toolchain.."-exe",
--			toolchain = toolchain,
--			srcs = { coo }
--		}
--
--		local test = runtest {
--			name = base.."-"..toolchain.."-test",
--			toolchain = toolchain,
--			exe = { exe },
--			goodfile = { base..".good" }
--		}
--
--		alltests[#alltests+1] = test
--	end
--end
--
--normalrule {
--	name = "tests",
--	outleaves = {"stamp"},
--	ins = alltests,
--	commands = {
--		"touch %{outs}"
--	}
--}
--
