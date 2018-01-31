%{
%}
%x string

LF (\r\n)|\r|\n
SP [ \t]+

%%
"!="                     {a}
"%"                      {b}
"&"                      {c}
"("                      {d}
"*"                      {e}
"+"                      {f}
","                      {ig}
"-"                      {h}
"."                      {i}
"/"                      {j}
":"                      {k}
":="                     {l}
";"                      {m}
"<"                      {n}
"<<"                     {o}
"<="                     {p}
"=="                     {q}
">"                      {r}
">="                     {s}
">>"                     {t}
"["                      {u}
"]"                      {v}
"^"                      {w}
"{"                      {x}
"|"                      {y}
"}"                      {z}
"~"                      {aa}
@bytes                   {}
@index                   {}
@segment                 {}
@size                    {}
and                      {}
as                       {}
break                    {}
const                    {}
continue                 {}
else                     {}
elseif                   {}
end                      {}
goto                     {}
if                       {}
loop                     {}
namespace                {}
not                      {}
or                       {}
record                   {}
return                   {}
sub                      {}
then                     {}
var                      {}
while                    {}

\"                        { BEGIN string; ClearBuffer(strbuf); }
<string>\\n               { AppendBufferChar(strbuf, '\n'); }
<string>\\t               { AppendBufferChar(strbuf, '\t'); }
<string>\\x[0-9A-Fa-f]{2} { AppendBufferChar(strbuf, strtol(yytext+1, 0, 8)); }
<string>\\[\\"]           { AppendBufferChar(strbuf, yytext[1]); }
<string>\"                { yylval.str = strdup(BufferData(strbuf)); BEGIN 0; return STRING; }
<string>\\.               { error("bogus escape '%s' in string\n", yytext); }
<string>[\x1a\n\r]        { error("newline in string\n"); }
<string>.*                { AppendBufferString(strbuf, yytext); }

\'[^']\'                 {}
\'\\.\'                  {}

-?0b[01']+               { binary }
-?0o[0-7']+              { octal }
-?[0-9']+                { decimal }
-?0x[0-9A-Fa-f']+        { hex }

[a-zA-Z][a-zA-Z0-9_]*    { identifier }
#[^\r\n\z]               {}
{LF}                     {}
{SP}+                    {}

\x1a                     { eof }
.                        { return 0; }
