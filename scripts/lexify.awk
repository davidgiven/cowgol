function linemode() {
	RS = "[\n\r]+"
	FS = "[][ \t]+"
}

function wordmode() {
	RS = "[{}, \t\n]+"
	FS = "[^0-9]"
}

BEGIN {
	linemode();
	name = "";
}

/^static yyconst / {
	name = $4;
	size = $5;
	width = 8;
	count = 0;
	wordmode();
}

/while \( yy_current_state !=/ {
	printf("const YY_ACCEPTING_STATE := %d;\n", $6);
}

$1 ~ /^[0-9]+$/ {
	data[count++] = $1
	if ($1 > 255)
		width = 16;
}

/;/ {
	if (name != "") {
		printf("var %s: uint%d[%d] := {", name, width, size);
		for (i=0; i<count; i++)
			printf("%d, ", data[i]);
		printf("};\n");
		name = "";
		linemode();
	}
}

/^#define INITIAL 0$/ {
	printf("const STATE_INITIAL := 1;\n");
	for (;;) {
		getline;
		if ($1 != "#define")
			break;

		printf("const STATE_%s := %d;\n", toupper($2), 2*$3 + 1);
	}
}

/switch.*yy_act/ {
	printf("sub perform_action(action: uint8)\n");
}

/end of action switch/ {
	printf("end sub;\n");
}

/^case [0-9]+:$/ {
	action = $2;
	for (;;) {
		getline;
		if ($0 ~ /{/)
			break;
		if ($0 ~ /YY_BREAK/)
			next;
	}

	text = $0
	for (;;) {
		getline;
		if ($0 ~ /YY_BREAK/)
			break;
		text = text "\n" $0;
	}
	text = gensub(/^{(.*)}/, "\\1", "g", text);
	if (text !~ /^[ \t]*$/) {
		printf("if action == %d then\n", action);
		printf("%s\n", text);
		printf("return;\nend if;\n");
	}
}

