%{
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "globals.h"
#include "parser.h"

static int stringptr = 0;
static int base = 0;

%}
%x STRINGSTATE
%x NUMBERSTATE

LF (\r\n)|\r|\n
SP [ \t]+

%%

"var"                     { return VAR; }
"sub"                     { return SUB; }
"end"                     { return END; }
"loop"                    { return LOOP; }
"while"                   { return WHILE; }
"@asm"                    { return ASM; }
"if"                      { return IF; }
"then"                    { return THEN; }
"break"                   { return BREAK; }
":="                      { return ASSIGN; }
"=="                      { return EQOP; }
"!="                      { return NEOP; }
"<="                      { return LEOP; }
">="                      { return GEOP; }
"<"                       { return LTOP; }
">"                       { return LEOP; }
[-;:,+*/%()[\]]           { return yytext[0]; }

\"                        { BEGIN(STRINGSTATE); }
<STRINGSTATE>([^\"\\]|\\.)* { return STRING; }
<STRINGSTATE>\"           { BEGIN(INITIAL); }
<STRINGSTATE>{LF}         { fatal("end of line in string"); }
<STRINGSTATE>.            { fatal("invalid string"); }

[A-Za-z][A-Za-z0-9_$]*    { return ID; }

0x                        { number = 0; base = 16; BEGIN(NUMBERSTATE); }
0d                        { number = 0; base = 10; BEGIN(NUMBERSTATE); }
0o                        { number = 0; base = 8; BEGIN(NUMBERSTATE); }
0b                        { number = 0; base = 2; BEGIN(NUMBERSTATE); }
[0-9]                     { number = *yytext - '0'; base = 10; BEGIN(NUMBERSTATE); }
<NUMBERSTATE>_            {}
<NUMBERSTATE>[0-9a-fA-F]  { 
	int digit = tolower(*yytext);
	if (digit > '9')
		digit -= 'a' - 10;
	else
		digit -= '0';
	if (digit >= base)
		fatal("numeric digit out of range");
	number *= base;
	number += digit;
}
<NUMBERSTATE>.            { BEGIN(INITIAL); unput(*yytext); return NUMBER; }

#[^\r\n]*                 |
{LF}+                     |
{SP}+                     {}

<<EOF>> { yyterminate(); return 0; }

.       { fatal("unparseable character '%c' (0x%02x)", *yytext, *yytext); }

