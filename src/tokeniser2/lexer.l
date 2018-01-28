%{
%}
%x string

LF (\r\n)|\r|\n
SP [ \t]+

%%
"!="        {a}
"%"         {b}
"&"         {c}
"("         {d}
"*"         {e}
"+"         {f}
","         {ig}
"-"         {h}
"."        {i}
"/"         {j}
":"         {k}
":="        {l}
";"         {m}
"<"         {n}
"<<"        {o}
"<="        {p}
"=="        {q}
">"         {r}
">="        {s}
">>"        {t}
"["        {u}
"]"         {v}
"^"         {w}
"{"        {x}
"|"         {y}
"}"        {z}
"~"         {aa}
@bytes    {}
@index    {}
@segment  {}
@size     {}
and       {}
as        {}
break     {}
const     {}
continue  {}
else      {}
elseif    {}
end       {}
goto      {}
if        {}
loop      {}
namespace {}
not       {}
or        {}
record    {}
return    {}
sub       {}
then      {}
var       {}
while     {}

\"                  { BEGIN string; ClearBuffer(strbuf); }
<string>[^\\"\n]*   { AppendBufferString(strbuf, yytext); }
<string>\\n         { AppendBufferChar(strbuf, '\n'); }
<string>\\t         { AppendBufferChar(strbuf, '\t'); }
<string>\\[0-7]*    { AppendBufferChar(strbuf, strtol(yytext+1, 0, 8)); }
<string>\\[\\"]     { AppendBufferChar(strbuf, yytext[1]); }
<string>\"          { yylval.str = strdup(BufferData(strbuf)); BEGIN 0; return STRING; }
<string>\\.         { error("bogus escape '%s' in string\n", yytext); }
<string>[\n\r]      { error("newline in string\n"); }

\'[^']\'            { }

[a-zA-Z][a-zA-Z0-9_]* { return 7; }
-?0x[0-9A-Fa-f]+ { return 8; }
-?0b[01]+ { return 9; }
-?0o[0-7]+ { return 10; }
-?[0-9]+ { return 11; }
#.*{LF} { }
{LF} { }
{SP}+ {}
. { return 0; }
