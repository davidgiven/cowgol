%{
#include <stdio.h>
#include "globals.h"
#include "y.tab.h"

%}
%%

<<EOF>> { yyterminate(); return 0; }

.       { fatal("unparseable character 0x%02x", *yytext); }

