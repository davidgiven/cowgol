%{
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include "globals.h"
    #include "parser.h"

    static int base = 0;
    static int nesting = 0;
    int number;
    const char* string;
%}

%x STRINGSTATE
%x CSTRINGSTATE
%x CSTRINGQSTATE
%x NUMBERSTATE
%x COPYSTATE

LF (\r\n)|\r|\n
SP [ \t]+
ID [A-Za-z][A-Za-z0-9_$]*

%%

"("						  { return OPENPAREN; }
")"						  { return CLOSEPAREN; }
","                       { return COMMA; }
";"                       { return SEMICOLON; }
":="                      { return ASSIGN; }
"=="                      { return EQOP; }
"!="                      { return NEOP; }
"<="                      { return LEOP; }
"<"                       { return LTOP; }
">="                      { return GEOP; }
">"                       { return GTOP; }
"-"                       { return MINUS; }
"|"                       { return PIPE; }
":"                       { return COLON; }
"~"                       { return TILDE; }
"$$"                      { return STRINGSTRING; }
"compatible"              { return COMPATIBLE; }
"gen"                     { return GEN; }
"is"                      { return IS; }
"regclass"                { return REGCLASS; }
"regdata"                 { return REGDATA; }
"register"                { return REGISTER; }
"rewrite"                 { return REWRITE; }
"stacked"                 { return STACKED; }
"uses"                    { return USES; }
"wordsize"                { return WORDSIZE; }

\"                        { BEGIN(STRINGSTATE); return BEGINSTRING; }
<STRINGSTATE>([^\"\\$]|\\.)* { string = strdup(yytext); return CSTRING; }
<STRINGSTATE>\"           { BEGIN(INITIAL); return ENDSTRING; }
<STRINGSTATE>\$\$         |
<STRINGSTATE>\${ID}       { string = strdup(yytext+1); return CID; }
<STRINGSTATE>.            { fatal("invalid string"); }

"{"                       { BEGIN(CSTRINGSTATE); nesting = 1; return BEGINCSTRING; }
<CSTRINGSTATE>{LF}        { yylineno++; string = strdup("\n"); return CSTRING; }
<CSTRINGSTATE>\$\$        |
<CSTRINGSTATE>\${ID}      { string = strdup(yytext+1); return CID; }
<CSTRINGSTATE>"\""        { string = strdup("\""); BEGIN(CSTRINGQSTATE); return CSTRING; }
<CSTRINGSTATE>"{"         { nesting++; string = strdup("{"); return CSTRING; }
<CSTRINGSTATE>"}"         {
                              nesting--;
                              if (!nesting)
                              {
                                  BEGIN(INITIAL);
                                  return ENDCSTRING;
                              }
                              else
                              {
                                  string = strdup("}");
                                  return CSTRING;
                              }
                          }
<CSTRINGSTATE>'\\.'       |
<CSTRINGSTATE>'.'         |
<CSTRINGSTATE>[^'"{}$\n]* { string = strdup(yytext); return CSTRING; }
<CSTRINGSTATE>.           { fatal("invalid cstring"); }

<CSTRINGQSTATE>\\.        |
<CSTRINGQSTATE>[^"\\]+    { string = strdup(yytext); return CSTRING; }
<CSTRINGQSTATE>\"         { string = "\""; BEGIN(CSTRINGSTATE); return CSTRING; }
<CSTRINGQSTATE>.          { fatal("invalid cstringq"); }

{ID}                      { string = strdup(yytext); return ID; }

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
<COPYSTATE>[^%\n\r]+      |
<COPYSTATE>.              { fputs(yytext, outfp); }

"//"[^\r\n]*              {}
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

// vim: sw=4 ts=4 et

