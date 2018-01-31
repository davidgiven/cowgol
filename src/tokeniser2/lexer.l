%{
%}
%x string
%x binary
%x octal
%x decimal
%x hex

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

-?0b                            { start_state := STATE_BINARY;  number_base := 2; }
-?0o                            { start_state := STATE_OCTAL;   number_base := 8; }
-?0x                            { start_state := STATE_HEX;     number_base := 16; }
-?/[0-9]                        { start_state := STATE_DECIMAL; number_base := 10; }
<binary,octal,decimal,hex>[0-1] |
<octal,decimal,hex>[2-7]        |
<decimal,hex>[8-9]              { digit }
<hex>[A-Fa-f]                   { hexdigit }
<binary>[2-7]                   |
<binary,octal>[8-9]             |
<hex>[G-Zg-z]                   { baddigit}

[a-zA-Z][a-zA-Z0-9_]*    { identifier }
#[^\r\n\z]               {}
{LF}                     {}
{SP}+                    {}

\x1a                     { eof }
.                        { return 0; }
