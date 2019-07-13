%{
#include <stdio.h>
#include <string.h>
#include "globals.h"
#include "y.tab.h"

static int stringptr = 0;

%}
%x string

LF (\r\n)|\r|\n
SP [ \t]+

%%

"var"     { return VAR; }
"sub"     { return SUB; }
"end"     { return END; }
"loop"    { return LOOP; }
"while"   { return WHILE; }
":"       { return ':'; }
","       { return ','; }
":="      { return ASSIGN; }
"=="      { return EQUALS; }
"!="      { return NOTEQUALS; }
";"       { return ';'; }
"+"       { return '+'; }
"-"       { return '-'; }
"("       { return '('; }
")"       { return ')'; }
"["       { return '['; }
"]"       { return ']'; }

\"                        { BEGIN(string); stringptr = 0; }
<string>\\n               { text[stringptr++] = '\n'; }
<string>\\r               { text[stringptr++] = '\r'; }
<string>\\t               { text[stringptr++] = '\t'; }
<string>\\[\\"]           { text[stringptr++] = yytext[1]; }
<string>\"                { BEGIN(INITIAL); text[stringptr++] = '\0'; return STRING; }
<string>\\.               { fatal("bogus escape"); }
<string>[\n\r]            { fatal("unterminated string"); }
<string>[^\n\r\\"]        { text[stringptr++] = *yytext; }

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
{LF}+                     |
{SP}+                     {}

<<EOF>> { yyterminate(); return 0; }

.       { fatal("unparseable character 0x%02x", *yytext); }

