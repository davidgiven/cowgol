flex {
	ins = { "src/oldcom/lexer.l" },
	outs = { "$OBJ/src/oldcom/lexer.c" }
}

lemon {
	ins = { "src/oldcom/parser.y" },
	outs = {
		"$OBJ/src/oldcom/parser.c",
		"$OBJ/src/oldcom/parser.h",
	}
}

for _, arch in ipairs(OLDCOM_ARCHS) do
	newgen {
		ins = { "src/oldcom/arch"..arch..".ng" },
		outs = {
			"$OBJ/oldcom-"..arch.."/inssel.c",
			"$OBJ/oldcom-"..arch.."/inssel.h",
		}
	}

	cprogram {
		ins = {
			"src/oldcom/main.c",
			"src/oldcom/codegen.c",
			"src/oldcom/compiler.c",
			"src/oldcom/emitter.c",
			"src/oldcom/globals.h",
			"$OBJ/midcodes.h",
			"$OBJ/midcodes.c",
			"$OBJ/src/oldcom/lexer.c",
			"$OBJ/src/oldcom/parser.c",
			"$OBJ/src/oldcom/parser.h",
			"$OBJ/oldcom-"..arch.."/inssel.c",
			"$OBJ/oldcom-"..arch.."/inssel.h",
		},
		ldflags = "-lbsd -lfl",
		outs = { "bin/oldcom-"..arch },
		objdir = "$OBJ/oldcom-"..arch,
	}
end

