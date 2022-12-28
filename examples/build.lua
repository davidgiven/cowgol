local PROGRAMS = {
	"argv",
	"cowcalc",
	"file",
	"filetester",
	"helloworld",
	"icando",
	"mandel",
	"passto"
}

for _, toolchain in ipairs(ALL_TOOLCHAINS) do
	for _, prog in ipairs(PROGRAMS) do
        cowgol {
                toolchain = toolchain,
                ins = {
                        "examples/"..prog..".cow"
                },
                outs = { "bin/examples/"..prog }
        }
	end
end
