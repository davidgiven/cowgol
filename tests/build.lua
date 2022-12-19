ALL_TESTS = {
	"addsub-16bit",
	"addsub-32bit",
	"addsub-8bit",
	"atoi",
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
	--"empty", # causes qemu to crash, but works on real hardware
	"fileio",
	"folding",
	"forwards",
	"inputparams",
	"interfaces",
	"itoa",
	"logic-16bit",
	"logic-32bit",
	"logic-8bit",
	"loops",
	"lvalues",
	"malloc",
	"mul-16bit-s",
	"mul-16bit-u",
	"mul-32bit-s",
	"mul-32bit-u",
	"mul-8bit-s",
	"mul-8bit-u",
	"nested-calls",
	"outputparams",
	"pointers",
	"rangetypes",
	"recordinitialisers",
	"records",
	"regalloc",
	"shifts-16bit",
	"shifts-32bit",
	"shifts-8bit",
	"unions",
}

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	-- ncgen uses the bootstrap compiler, which should be tested and also
	-- doesn't support the current language features. So, we don't need to
	-- run the tests for it and they likely won't work anyway.
	if toolchain.name ~= "ncgen" then
		for _, test in ipairs(ALL_TESTS) do
			if toolchain.tester then
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
	end
end


local passto_toolchains = {
	["ataritos"] = true,
	["nncgen"] = true ,
	["lxthumb2"] = true,
	["lx386"] = true ,
	["lx68k"] = true,
	["lxppc"] = true,
	["unixv7"] = true,
	["msdos"] = true
}

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	if toolchain.tester
		and passto_toolchains[toolchain.name]
	then
		local exe = cowgol {
			toolchain = toolchain,
			ins = {
				"tests/passto.test.cow",
				"tests/_framework.coh",
			},
			outs = { "$OBJ/tests/passto" }
		}
		toolchain.tester {
			ins = { exe },
			goodfile = "tests/passto.good"
		}
	end
end