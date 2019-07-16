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
"extern"                  { return EXTERN; }
"if"                      { return IF; }
"then"                    { return THEN; }
"break"                   { return BREAK; }
":="                      { return ASSIGN; }
"=="                      { return EQUALS; }
"!="                      { return NOTEQUALS; }
[-;:,+*/%()[\]]           { return yytext[0]; }

\"                        { BEGIN(STRINGSTATE); stringptr = 0; }
<STRINGSTATE>\\n          { text[stringptr++] = '\n'; }
<STRINGSTATE>\\r          { text[stringptr++] = '\r'; }
<STRINGSTATE>\\t          { text[stringptr++] = '\t'; }
<STRINGSTATE>\\[\\"]      { text[stringptr++] = yytext[1]; }
<STRINGSTATE>\"           { BEGIN(INITIAL); text[stringptr++] = '\0'; return STRING; }
<STRINGSTATE>\\.          { fatal("bogus escape"); }
<STRINGSTATE>[\n\r]       { fatal("unterminated string"); }
<STRINGSTATE>[^\n\r\\"]   { text[stringptr++] = *yytext; }

[A-Za-z][A-Za-z0-9_$]* {
		strncpy(text, yytext, sizeof(text));
		if (text[sizeof(text)-1] != 0)
			fatal("token too long");
		return ID;
	}

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

