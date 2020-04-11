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

%syntax_error
{
	StartError();
	print("unexpected ");
	print(yyTokenName[yymajor]);
	EndError();
}

%stack_overflow
{
	StartError();
	print("parser stack overflow");
	EndError();
}

%token_destructor
{
	if $$ != (0 as [Token]) then
		Free($$.string as [uint8]);
		Free($$ as [uint8]);
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
	Generate(MidReturn());
}

/* --- Variable declaration ---------------------------------------------- */

statement ::= VAR newid(S) COLON typeref(T) SEMICOLON.
{
	S.kind := VAR;
	InitVariable(S, T);
}

statement ::= VAR newid(S) COLON typeref(T) ASSIGN expression(E) SEMICOLON.
{
	S.kind := VAR;
	InitVariable(S, T);
    CheckExpressionType(E, S.vardata.type);

    Generate(MidStore(E.type.typedata.width as uint8, E, MidAddress(S, 0)));
}

statement ::= VAR newid(S) ASSIGN expression(E) SEMICOLON.
{
	var type := E.type;
	if type == (0 as [Symbol]) then
		SimpleError("types cannot be inferred for numeric constants");
	end if;
	if IsScalar(type) == 0 then
		SimpleError("you can only assign to lvalues");
	end if;

	S.kind := VAR;
	InitVariable(S, type);
	CheckExpressionType(E, S.vardata.type);

	Generate(MidStore(E.type.typedata.width as uint8, E, MidAddress(S, 0)));
}

/* --- Assignments ------------------------------------------------------- */

statement ::= lvalue(E1) ASSIGN expression(E2) SEMICOLON.
{
	if IsPtr(E1.type) == 0 then
		SimpleError("you can only assign to lvalues");
	end if;

	var e := E1.type.typedata.member.element;
	CheckExpressionType(E2, e);
	Generate(MidStore(e.typedata.width as uint8, E2, E1));
}

/* --- Simple loops ------------------------------------------------------ */

%include
{
	sub BeginNormalLoop(): (ll: [LoopLabels])
		ll := Alloc(@bytesof LoopLabels) as [LoopLabels];
		ll.loop_label := AllocLabel();
		ll.exit_label := AllocLabel();
		ll.old_break_label := break_label;
		ll.old_continue_label := continue_label;
		break_label := ll.exit_label;
		continue_label := ll.loop_label;
	end sub;

	sub TerminateNormalLoop(ll: [LoopLabels])
		Generate(MidJump(continue_label));
		Generate(MidLabel(break_label));
		break_label := ll.old_break_label;
		continue_label := ll.old_continue_label;
		Free(ll as [uint8]);
	end sub;
}

statement ::= startloopstatement(LL) statements END LOOP.
{
	TerminateNormalLoop(LL);
}

%type startloopstatement {[LoopLabels]}
startloopstatement(LL) ::= LOOP.
{
	LL := BeginNormalLoop();
	Generate(MidLabel(continue_label));
}

/* --- While loops ------------------------------------------------------- */

statement ::= startwhilestatement(LL) statements END LOOP.
{
	TerminateNormalLoop(LL);
}

%type startwhilestatement {[LoopLabels]}
startwhilestatement(LL) ::= WHILE conditional(C) LOOP.
{
	LL := BeginNormalLoop();
	Generate(MidLabel(continue_label));
	var t := C.beqs0.truelabel;
	var f := C.beqs0.falselabel;
	C.beqs0.fallthrough := t;
	Generate(C);
	Generate(MidLabel(t));
	LL.exit_label := f;
	break_label := f;
}

/* --- Conditional expressions ------------------------------------------- */

%type conditional {[Node]}
conditional(R) ::= OPENPAREN conditional(C) CLOSEPAREN.
{
	R := C;
}

%include
{
	sub Negate(node: [Node])
		node.beqs0.negated := node.beqs0.negated ^ 1;
	end sub;
}

conditional(R) ::= NOT conditional(C).
{
	R := C;
	Negate(C);
}

conditional(R) ::= conditional(C1) AND conditional(C2).
{
	var t := C1.beqs0.truelabel;
	var f := C1.beqs0.falselabel;
	RewriteLabels(C2, C2.beqs0.falselabel, f);
	C1.beqs0.fallthrough := t;
	Generate(C1);
	Generate(MidLabel(t));
	R := C2;
}

conditional(R) ::= conditional(C1) OR conditional(C2).
{
	var t := C1.beqs0.truelabel;
	var f := C1.beqs0.falselabel;
	RewriteLabels(C2, C2.beqs0.truelabel, t);
	C1.beqs0.fallthrough := f;
	Generate(C1);
	Generate(MidLabel(f));
	R := C2;
}

%include
{
	sub ConditionalEq(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node])
		CondSimple(lhs, rhs);
		var truelabel := AllocLabel();
		var falselabel := AllocLabel();
		var w := NodeWidth(lhs);

		if IsSNum(lhs.type) != 0 then
			result := MidBeqs(w, lhs, rhs, truelabel, falselabel, 0, negated);
		else
			result := MidBequ(w, lhs, rhs, truelabel, falselabel, 0, negated);
		end if;
	end sub;
}

conditional(R) ::= expression(T1) EQOP expression(T2).
{
	R := ConditionalEq(T1, T2, 0);
}

conditional(R) ::= expression(T1) NEOP expression(T2).
{
	R := ConditionalEq(T1, T2, 1);
}
/*

conditional(R) ::= expression(T1) LTOP expression(T2).
{
	R = cond_simple(T1, T2, mid_bltu, mid_blts);
}

conditional(R) ::= expression(T1) GEOP expression(T2).
{
	R = negated(cond_simple(T1, T2, mid_bltu, mid_blts));
}

conditional(R) ::= expression(T1) GTOP expression(T2).
{
	R = cond_simple(T2, T1, mid_bltu, mid_blts);
}

conditional(R) ::= expression(T1) LEOP expression(T2).
{
	R = negated(cond_simple(T2, T1, mid_bltu, mid_blts));
}
*/

/* --- Expressions ------------------------------------------------------- */

%type expression {[Node]}
expression(E) ::= NUMBER(T).                               { E := MidConstant(T.number); }
expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.     { E := E1; }
expression(E) ::= MINUS expression(E1).                    { E := ExprNeg(E1); }
expression(E) ::= expression(E1) PLUS expression(E2).      { E := ExprAdd(E1, E2); }
expression(E) ::= expression(E1) MINUS expression(E2).     { E := ExprSub(E1, E2); }
expression(E) ::= expression(E1) STAR expression(E2).      { E := ExprMul(E1, E2); }
expression(E) ::= expression(E1) SLASH expression(E2).     { E := ExprDiv(E1, E2); }
expression(E) ::= expression(E1) PERCENT expression(E2).   { E := ExprRem(E1, E2); }
expression(E) ::= expression(E1) CARET expression(E2).     { E := ExprEor(E1, E2); }
expression(E) ::= expression(E1) AMPERSAND expression(E2). { E := ExprAnd(E1, E2); }
expression(E) ::= expression(E1) PIPE expression(E2).      { E := ExprOr(E1, E2); }
expression(E) ::= expression(E1) LSHIFT expression(E2).    { E := ExprLShift(E1, E2); }
expression(E) ::= expression(E1) RSHIFT expression(E2).    { E := ExprRShift(E1, E2); }

expression(E) ::= lvalue(E1).
{
	if E1.type != (0 as [Symbol]) then
		var dereftype := E1.type.typedata.element;
		if IsScalar(dereftype) == 0 then
			SimpleError("non-scalars cannot be used in this context");
		end if;
		E := MidLoad(dereftype.typedata.width as uint8, E1);
		E.type := dereftype;
	else
		E := E1;
	end if;
}

/* --- Lvalues ----------------------------------------------------------- */

%type lvalue {[Node]}
lvalue(E) ::= oldid(S).
{
	case S.kind is
		when CONST:
			E := MidConstant(S.constant);

		when VAR:
			E := MidAddress(S, 0);
			E.type := MakePointerType(S.vardata.type);

		when else:
			StartError();
			print(S.name);
			print(" is not a value");
			EndError();
	end case;
}

%type cvalue {Arith}
cvalue(C) ::= expression(E).
{
	if E.type != (0 as [Symbol]) then
		SimpleError("only constant values are allowed here");
	end if;
	C := E.constant.value;
}

/* --- Types ------------------------------------------------------------- */

%type typeref {[Symbol]}
typeref(S) ::= INT OPENPAREN cvalue(MIN) COMMA cvalue(MAX) CLOSEPAREN.
{
	if MAX <= MIN then
		SimpleError("invalid integer type range");
	end if;
	S := ArchGuessIntType(MIN, MAX);
}

typeref(S) ::= eitherid(ID).
{
	var sym := ID;
	if sym.kind == 0 then
		# Create a partial type.
		sym.kind := TYPE;
		sym.typedata.kind := TYPE_PARTIAL;
	end if;
	if sym.kind != TYPE then
		StartError();
		print("expected ");
		print(sym.name);
		print(" to be a type");
		EndError();
	end if;
	S := sym;
}

statement ::= TYPEDEF ID(X) ASSIGN typeref(T) SEMICOLON.
{
	var sym := AddAlias(0 as [Namespace], X, T);
}

/* --- Symbols ----------------------------------------------------------- */

%type newid {[Symbol]}
newid(S) ::= ID(T).
{
	S := AddSymbol(0 as [Namespace], T);
}

%type oldid {[Symbol]}
oldid(S) ::= ID(T).
{
	var name := T.string;
	var sym := LookupSymbol(0 as [Namespace], name);
	if sym == (0 as [Symbol]) then
		StartError();
		print("symbol '");
		print(name);
		print("' not found");
		EndError();
	end if;
	S := sym;
}

%type eitherid {[Symbol]}
eitherid(S) ::= ID(T).
{
	var sym := LookupSymbol(0 as [Namespace], T.string);
	if sym == (0 as [Symbol]) then
		sym := AddSymbol(0 as [Namespace], T);
	end if;
	S := sym;
}

