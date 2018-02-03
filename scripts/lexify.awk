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
	maxaction = 0;
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

function generate_actions(min, max,   i, count, mid) {
	count = 0;
	for (i=min; i<max; i++)
		if (i in actions)
			count++;

	printf("# actions between %d and %d: %d\n", min, max, count);
	if (count < 10) {
		notfirst = 0;
		for (i=min; i<max; i++) {
			if (i in actions) {
				if (notfirst)
					printf("else");
				notfirst = 1;
				printf("if action == %d then\n", i);
				printf("%s\n", actions[i]);
			}
		}
		if (notfirst)
			printf("end if;\n");
	} else {
		mid = int((min + max) / 2);
		printf("sub actions_from_%d_to_%d()\n", min, mid);
		generate_actions(min, mid);
		printf("end sub;\n");

		printf("sub actions_from_%d_to_%d()\n", mid, max);
		generate_actions(mid, max);
		printf("end sub;\n");

		printf("if action < %d then\n", mid);
		printf("actions_from_%d_to_%d();\n", min, mid);
		printf("else\n");
		printf("actions_from_%d_to_%d();\n", mid, max);
		printf("end if;\n");
	}
}

/end of action switch/ {
	generate_actions(0, maxaction+1);
	printf("end sub;\n");
}

/^case [0-9]+:$/ {
	action = $2 + 0;
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
		actions[action] = text;
		if (action > maxaction)
			maxaction = action;
	}
}

