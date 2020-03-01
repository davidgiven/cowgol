%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.
%token OPENBR CLOSEBR ID NUMBER AT BYTESOF ELSEIF.
%token INT TYPEDEF SIZEOF STRING.

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
			StartError();
			print("unconsumed string");
			EndError();
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
{
	print("return\n");
}

/* --- Variable declaration ---------------------------------------------- */

statement ::= VAR newid(S) COLON typeref(T) SEMICOLON.
{
#	S->kind = VAR;
#	init_var(S, T);
}

/* --- Types ------------------------------------------------------------- */

/*
typeref(sym) ::= INT OPENPAREN cvalue(min) COMMA cvalue(max) CLOSEPAREN.
{
	if (max <= min)
		fatal("invalid integer type range");
	sym = arch_guess_int_type(min, max);
}
*/

typeref(sym) ::= eitherid(id).
{
#    sym = id;
#	if (!sym->kind)
#	{
#		/* Create a partial type ref. */
#		sym->kind = TYPE;
#		sym->u.type.kind = TYPE_PARTIAL;
#	}
#    if (sym->kind != TYPE)
#        fatal("expected '%s' to be a type", sym->name);
}

/*
typeref(sym) ::= typeref(basetype) OPENSQ cvalue(value) CLOSESQ.
{ sym = make_array_type(basetype, value); }

typeref(sym) ::= typeref(basetype) OPENSQ CLOSESQ.
{ sym = make_array_type(basetype, 0); }

typeref(sym) ::= OPENSQ typeref(basetype) CLOSESQ.
{
	sym = make_pointer_type(basetype);
}

typeref(sym) ::= INDEXOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if ((S->kind == TYPE) && is_array(S))
		sym = S->u.type.indextype;
	else
		fatal("you can only use @indexof on arrays");
}

statement ::= TYPEDEF ID(X) ASSIGN typeref(T) SEMICOLON.
{
	add_alias(NULL, X->string, T);
}
*/

/* --- Low level symbol stuff -------------------------------------------- */

%type newid {[Symbol]}
newid(S) ::= ID(token).
{
#    S = add_new_symbol(NULL, token->string);
}

/*
%type oldid {[Symbol]}
oldid(S) ::= ID(token).
{
	print("oldid\n");
#    S = lookup_symbol(NULL, token->string);
#	if (!S)
#		fatal("symbol '%s' not found", token->string);
}
*/

%type eitherid {[Symbol]}
eitherid(S) ::= ID(token).
{
#	S = lookup_symbol(NULL, token->string);
#	if (!S)
#		S = add_new_symbol(NULL, token->string);
}

