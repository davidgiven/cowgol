%{
#include <stdio.h>
#include <string.h>
#include "globals.h"
#include "y.tab.h"

%}

LF (\r\n)|\r|\n
SP [ \t]+

%%

"var"     { return VAR; }
"sub"     { return SUB; }
"end"     { return END; }
"loop"    { return LOOP; }
":"       { return ':'; }
":="      { return ASSIGN; }
";"       { return ';'; }
"+"       { return '+'; }
"-"       { return '-'; }
"("       { return '('; }
")"       { return ')'; }

[A-Za-z][A-Za-z0-9_$]* {
		strncpy(text, yytext, sizeof(text));
		if (text[sizeof(text)-1] != 0)
			fatal("token too long");
		return ID;
	}

[0-9]+ {
		number = atoi(yytext);
		return NUMBER;
	}

#[^\r\n]*                 |
{SP}+                     {}

<<EOF>> { yyterminate(); return 0; }

.       { fatal("unparseable character 0x%02x", *yytext); }

