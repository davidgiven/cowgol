lemon {
	ins = { "tools/newgen/parser.y" },
	outs = {
		"$OBJ/tools/newgen/parser.c",
		"$OBJ/tools/newgen/parser.h",
	}
}

flex {
	ins = { "tools/newgen/lexer.l" },
	outs = { "$OBJ/tools/newgen/lexer.c" },
}

cprogram {
	ins = {
		"tools/newgen/main.c",
		"tools/newgen/utils.c",
		"tools/newgen/globals.h",
		"$OBJ/iburgcodes-coh.h",
		"$OBJ/tools/newgen/parser.c",
		"$OBJ/tools/newgen/parser.h",
		"$OBJ/tools/newgen/lexer.c",
	},
	objdir = "$OBJ/newgen-cowgol",
	cflags = "-DCOWGOL",
	ldflags = "-lfl",
	outs = { "bin/newgen-cowgol" }
}

function newgencowgol(e)
	local infile = e.ins[1]
	local cppfile = infile:ext(".i"):obj();

	gpp {
		ins = { infile },
		outs = { cppfile }
	}

	rule {
		ins = concat {
			"bin/newgen-cowgol",
			cppfile
		},
		outs = e.outs,
		cmd = "@1 @2 &1 &2"
	}
end

