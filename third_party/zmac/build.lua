yacc {
	ins = { "third_party/zmac/zmac.y" },
	outs = {
		"$OBJ/third_party/zmac/y.tab.c",
		"$OBJ/third_party/zmac/y.tab.h",
	}
}

cprogram {
	ins = {
		"$OBJ/third_party/zmac/y.tab.c",
		"third_party/zmac/mio.c",
		"third_party/zmac/zi80dis.cpp"
	},
	outs = {
		"bin/zmac"
	},
	cflags = "-I$OBJ/third_party/zmac -Ithird_party/zmac"
}

function zmac(e)
	local f = e.ins[1]
	local _, _, ext = f:find("%.(%w+)$")
	local archflag = (ext == "z80") and "-z" or "-8"

	local hdrpaths = {}
	for _, t in ipairs(e.ins) do
		hdrpaths[#hdrpaths+1] = "-I"..t
	end

	rule {
		ins = concat(
			"bin/zmac",
			e.ins
		),
		outs = e.outs,
		cmd = "@1 -m "..archflag.." -o &1 "..table.concat(hdrpaths, " ").." @2"
	}
end

--include("build/yacc.lua")
--
--yacc {
--    name = "zmacparser",
--    srcs = { "./zmac.y" }
--}
--
--cprogram {
--    name = "zmac",
--    srcs = {
--        "./mio.c",
--        "./zi80dis.cpp",
--        matching(filenamesof("+zmacparser"), "%.c$"),
--    },
--    deps = {
--        "./zi80dis.h",
--        "+zmacparser"
--    }
--}
--
--definerule("zmac",
--    {
--        srcs = { type="targets" },
--        deps = { type="targets", default={} },
--        relocatable = { type="boolean", default=true },
--    },
--    function (e)
--        local firstfilename = filenamesof(e.srcs)[1]
--        local _, _, ext = firstfilename:find("%.(%w+)$")
--
--        local archflag = (ext == "z80") and "-z" or "-8"
--        local relflag = e.relocatable and "--rel7" or ""
--        local ext = e.relocatable and ".rel" or ".cim"
--
--        local hdrpaths = {}
--        for _, t in pairs(uniquify(dirname(filenamesof(e.deps)))) do
--            hdrpaths[#hdrpaths+1] = "-I"..t
--        end
--
--        return normalrule {
--            name = e.name,
--            ins = {
--                "third_party/zmac+zmac",
--                e.srcs
--            },
--            outleaves = { e.name..ext },
--            deps = e.deps,
--            commands = {
--                "%{ins[1]} -m "..relflag.." "..archflag.." -o %{outs[1]} %{hdrpaths} %{ins[2]}"
--            },
--            vars = {
--                hdrpaths = hdrpaths,
--            }
--        }
--    end
--)
