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
		"$OBJ/iburgcodes.h",
		"$OBJ/tools/newgen/parser.c",
		"$OBJ/tools/newgen/parser.h",
		"$OBJ/tools/newgen/lexer.c",
	},
	objdir = "$OBJ/newgen-c",
	ldflags = "-lfl",
	outs = { "bin/newgen" }
}

cprogram {
	ins = {
		"tools/newgen/main.c",
		"tools/newgen/utils.c",
		"tools/newgen/globals.h",
		"$OBJ/iburgcodes.h",
		"$OBJ/tools/newgen/parser.c",
		"$OBJ/tools/newgen/parser.h",
		"$OBJ/tools/newgen/lexer.c",
	},
	objdir = "$OBJ/newgen-cowgol",
	cflags = "-DCOWGOL",
	ldflags = "-lfl",
	outs = { "bin/newgen-cowgol" }
}

function newgen(e)
	rule {
		ins = concat {
			"bin/newgen",
			e.ins,
		},
		outs = e.outs,
		cmd = "@1 @2 &1 &2"
	}
end
--[[

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

definerule("newgencowgol",
	{
		srcs = { type="targets" },
	},
	function (e)
		return normalrule {
			name = e.name,
			ins = {
				"tools/newgen+newgen-cowgol",
				e.srcs
			},
			outleaves = { "inssel.coh", "inssel.decl.coh" },
			commands = {
				"%{ins[1]} %{ins[2]} %{outs[1]} %{outs[2]}"
			}
		}
	end
)
--]]

