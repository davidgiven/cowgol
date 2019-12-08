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

"!="                      { return NEOP; }
"%"                       { return PERCENT; }
"&"                       { return AMPERSAND; }
"("                       { return OPENPAREN; }
")"                       { return CLOSEPAREN; }
"*"                       { return STAR; }
"+"                       { return PLUS; }
","                       { return COMMA; }
"-"                       { return MINUS; }
"."                       { return DOT; }
"/"                       { return SLASH; }
":"                       { return COLON; }
":="                      { return ASSIGN; }
";"                       { return SEMICOLON; }
"<"                       { return LTOP; }
"<="                      { return LEOP; }
"=="                      { return EQOP; }
">"                       { return GTOP; }
">="                      { return GEOP; }
"@asm"                    { return ASM; }
"["                       { return OPENSQ; }
"]"                       { return CLOSESQ; }
"^"                       { return TILDE; }
"and"                     { return AND; }
"as"                      { return AS; }
"break"                   { return BREAK; }
"const"                   { return CONST; }
"else"                    { return ELSE; }
"end"                     { return END; }
"extern"                  { return EXTERN; }
"if"                      { return IF; }
"loop"                    { return LOOP; }
"not"                     { return NOT; }
"or"                      { return OR; }
"record"                  { return RECORD; }
"return"                  { return RETURN; }
"sub"                     { return SUB; }
"then"                    { return THEN; }
"var"                     { return VAR; }
"while"                   { return WHILE; }
"|"                       { return PIPE; }

\"                        { BEGIN(STRINGSTATE); }
<STRINGSTATE>([^\"\\]|\\.)* { return STRING; }
<STRINGSTATE>\"           { BEGIN(INITIAL); }
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
{LF}                      { yylineno++; }
{SP}+                     {}

include{SP}+\"[^"]*\"; {
	/* The parsing here is slightly dodgy, but... let's just go with it. */
	strtok(yytext, "\"");
	char* filename = strtok(NULL, "\""); /* second token is the filename */

	include_file(open_file(filename));
}

<<EOF>> {
	yypop_buffer_state();
	if (!YY_CURRENT_BUFFER)
		yyterminate();
}

.       { fatal("unparseable character '%c' (0x%02x)", *yytext, *yytext); }

%%

void* open_file(const char* filename)
{
	FILE* fp = fopen(filename, "r");
	if (!fp)
		fatal("could not open include file '%s'", yytext);
	return yy_create_buffer(fp, YY_BUF_SIZE);
}

void include_file(void* buffer)
{
	yypush_buffer_state((YY_BUFFER_STATE) buffer);
}

