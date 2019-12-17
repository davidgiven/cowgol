%{
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "globals.h"
#include "iburg.h"
#include "parser.h"

static int base = 0;
int number;
const char* string;

%}
%x NUMBERSTATE
%x COPYSTATE

LF (\r\n)|\r|\n
SP [ \t]+

%%

"("						  { return OPENPAREN; }
")"						  { return CLOSEPAREN; }
","                       { return COMMA; }
";"                       { return SEMICOLON; }
"="                       { return EQUALS; }
":"                       { return COLON; }
"%%"                      { return PPERCENT; }
"%term"                   { return TERMINAL; }
"%start"                  { return START; }
"costs"                   { return COSTS; }

[A-Za-z][A-Za-z0-9_$]*    { string = strdup(yytext); return ID; }

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
<NUMBERSTATE>.            { BEGIN(INITIAL); unput(*yytext); return INT; }

"%{"                      { BEGIN(COPYSTATE); }
<COPYSTATE>"%}"           { BEGIN(INITIAL); }
<COPYSTATE>{LF}           { fputc('\n', outfp); yylineno++; }
<COPYSTATE>.              { fputc(*yytext, outfp); }

#[^\r\n]*                 |
{LF}                      { yylineno++; }
{SP}+                     {}

include{SP}+\"[^"]*\"; {
	/* The parsing here is slightly dodgy, but... let's just go with it. */
	strtok(yytext, "\"");
	char* filename = strtok(NULL, "\""); /* second token is the filename */

	FILE* fp = fopen(filename, "r");
	if (!fp)
		fatal("cannot open '%s'", filename);
	include_file(open_file(fp));
}

<<EOF>> {
	yypop_buffer_state();
	if (!YY_CURRENT_BUFFER)
		yyterminate();
}

.       { fatal("unparseable character '%c' (0x%02x)", *yytext, *yytext); }

%%

void* open_file(FILE* fp)
{
	return yy_create_buffer(fp, YY_BUF_SIZE);
}

void include_file(void* buffer)
{
	yypush_buffer_state((YY_BUFFER_STATE) buffer);
}

