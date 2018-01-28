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

