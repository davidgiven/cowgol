%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.
%token OPENBR CLOSEBR ID NUMBER AT BYTESOF ELSEIF.
%token INT TYPEDEF SIZEOF.

%left COMMA.
%left AND.
%left OR.
%left PIPE.
%left CARET.
%left AMPERSAND.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%left AS.
%right NOT TILDE.

%token_type {[Token]}
%type typeref {[Symbol]}
%type expression {[Midnode]}
%type lvalue {[Midnode]}

%token_destructor
{
	if $$ != (0 as [Token]) then
		if $$.string != (0 as string) then
			Error();
			print("unconsumed string");
			ExitWithError();
		end if;
		FreeBlock($$ as [uint8]);
	end if;
}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

/* --- Top-level statements ---------------------------------------------- */

statement ::= SEMICOLON.

/* --- Simple statements ------------------------------------------------- */

statement ::= RETURN SEMICOLON.
{ }

/* --- Inline assembly --------------------------------------------------- */

statement ::= asmstart asms SEMICOLON.
{
	#generate(mid_asmend());
}

asmstart ::= ASM.
{
	#generate(mid_asmstart());
}

asms ::= asm.
asms ::= asm COMMA asms.

asm ::= STRING(token).
{
	#unescape(token->string);
	#generate(mid_asmtext(strdup(token->string)));
}

asm ::= NUMBER(token).
{
	#generate(mid_asmvalue(token->number));
}

asm ::= oldid(ID).
{
	#switch (ID->kind)
	#{
	#	case VAR:
	#	case SUB:
	#		generate(mid_asmsymbol(ID));
	#		break;

	#	case CONST:
	#		generate(mid_asmvalue(ID->u.constant));
	#		break;

	#	default:
	#		fatal("you can only emit references to variables, subroutines, or constants");
	#}
}

/* --- Low level symbol stuff -------------------------------------------- */

/*
%type newid {Symbol*}
newid(S) ::= ID(token).
{
    S = add_new_symbol(NULL, token->string);
}
*/

%type oldid {[Symbol]}
oldid(S) ::= ID(token).
{
#    S = lookup_symbol(NULL, token->string);
#	if (!S)
#		fatal("symbol '%s' not found", token->string);
}

/*
%type eitherid {Symbol*}
eitherid(S) ::= ID(token).
{
	S = lookup_symbol(NULL, token->string);
	if (!S)
		S = add_new_symbol(NULL, token->string);
}
*/

