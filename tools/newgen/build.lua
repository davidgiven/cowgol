include "third_party/lemon/build.lua"


flex {
	name = "lexer",
	srcs = { "./lexer.l" }
}

lemon {
	name = "parser",
	srcs = { "./parser.y" }
}

clibrary {
	name = "libnewgen",
	srcs = {
		"./utils.c",
		"+lexer",
		matching(filenamesof("+parser"), "%.c$"),
	},
	deps = {
		"+parser",
	}
}

cprogram {
	name = "newgen-cowgol",
	srcs = {
		"./main.c",
	},
	deps = {
		"+parser",
		"scripts+iburgcodes_cowgol_h",
		"+libnewgen",
	},
    vars = {
		["+cflags"] = { "-DCOWGOL" },
        ["+ldflags"] = { "-lfl" },
    },
}

cprogram {
	name = "newgen",
	srcs = {
		"./main.c",
	},
	deps = {
		"+parser",
		"scripts+iburgcodes_h",
		"+libnewgen",
	},
    vars = {
        ["+ldflags"] = { "-lfl" },
    },
}

definerule("newgen",
	{
		srcs = { type="targets" },
	},
	function (e)
		return normalrule {
			name = e.name,
			ins = {
				"tools/newgen+newgen",
				e.srcs
			},
			outleaves = { "inssel.c", "inssel.h" },
			commands = {
				"%{ins[1]} %{ins[2]} %{outs[1]} %{outs[2]}"
			}
		}
	end
)

