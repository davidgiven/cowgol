include "tools/newgen/build.lua"
include "build/yacc.lua"

local ARCHS = { "80386", "8080", "cgen", "thumb2" }

flex {
	name = "lexer",
	srcs = { "./lexer.l" }
}

lemon {
	name = "parser",
	srcs = { "./parser.y" }
}

clibrary {
	name = "libcommon",
	srcs = {
		matching(filenamesof("+lexer"), "%.c$"),
		matching(filenamesof("+parser"), "%.c$"),
		"scripts+midcodes_c",
		"./main.c",
		"./emitter.c",
		"./compiler.c",
	},
	deps = {
		"+parser",
		"+lexer",
		"scripts+midcodes_h",
	}
}

local installables = {}
for _, arch in ipairs(ARCHS) do
	local ng = newgen {
		name = "arch-"..arch,
		srcs = { "./arch"..arch..".ng" }
	}

	local i = cprogram {
		name = "oldcom-"..arch,
		srcs = {
			"./codegen.c",
			matching(filenamesof(ng), "%.c$")
		},
		deps = {
			"scripts+midcodes_h",
			"+parser",
			"+lexer",
			"+libcommon",
			ng
		},
		vars = {
			["+ldflags"] = "-lbsd -lfl"
		}
	}

	installables["bin/oldcom-"..arch] = i
end

installable {
	name = "all-oldcoms",
	map = installables
}

