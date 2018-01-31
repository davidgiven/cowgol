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
"!="                     {}
"%"                      {}
"&"                      {}
"("                      {}
"*"                      {}
"+"                      {}
","                      {}
"-"                      {}
"."                      {}
"/"                      {}
":"                      {}
":="                     {}
";"                      {}
"<"                      {}
"<<"                     {}
"<="                     {}
"=="                     {}
">"                      {}
">="                     {}
">>"                     {}
"["                      {}
"]"                      {}
"^"                      {}
"{"                      {}
"|"                      {}
"}"                      {}
"~"                      {}
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

\"                        { start_state := STATE_STRING; print("start string\n"); }
<string>\\n               {  }
<string>\\t               {  }
<string>\\x[0-9A-Fa-f]{2} { }
<string>\\[\\"]           { }
<string>\"                { start_state := STATE_INITIAL; print("end string\n"); }
<string>\\.               { # bogus escape }
<string>[\n\r]            { # newline in string }
<string>.                 { # append text }

\'[^']\'                 {}
\'\\.\'                  {}

-?0b                            { start_state := STATE_BINARY;  number_base := 2; print("start number\n"); }
-?0o                            { start_state := STATE_OCTAL;   number_base := 8; print("start number\n"); }
-?0x                            { start_state := STATE_HEX;     number_base := 16; print("start number\n"); }
-?/[0-9]                        { start_state := STATE_DECIMAL; number_base := 10; print("start number\n"); }
<binary,octal,decimal,hex>'     { }
<binary,octal,decimal,hex>[0-1] |
<octal,decimal,hex>[2-7]        |
<decimal,hex>[8-9]              { }
<hex>[A-Fa-f]                   { }
<binary>[2-7]                   |
<binary,octal>[8-9]             |
<hex>[G-Zg-z]                   { }
<binary,octal,decimal,hex>.     { start_state := STATE_INITIAL; print("end number\n"); }

[a-zA-Z][a-zA-Z0-9_]*    { print("identifier\n"); }
#[^\r\n\z]               {}
{LF}                     {}
{SP}+                    {}

.                        { }
