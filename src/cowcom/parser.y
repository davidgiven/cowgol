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
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%left AS.
%left AMPERSAND.
%right NEXT PREV.
%right NOT TILDE.
%right BYTESOF.
%right OPENSQ CLOSESQ.
%right DOT.

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

statement ::= expression(E1) ASSIGN expression(E2) SEMICOLON.
{
	var type := E1.type;
	var address := UndoLValue(E1);

	CheckExpressionType(E2, type);
	Generate(MidStore(type.typedata.width as uint8, E2, address));
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

/* --- Simple jumps ------------------------------------------------------ */

statement ::= BREAK SEMICOLON.
{
	if break_label == 0 then
		SimpleError("nothing to break to");
	end if;
	Generate(MidJump(break_label));
}

statement ::= CONTINUE SEMICOLON.
{
	if continue_label == 0 then
		SimpleError("nothing to continue to");
	end if;
	Generate(MidJump(continue_label));
}

/* --- If...Then...Else...End if ----------------------------------------- */

statement ::= IF if_begin if_conditional THEN if_statements if_optional_else END IF.
{
	Generate(MidLabel(current_if.exit_label));
	var oldif := current_if;
	current_if := current_if.next;
	Free(oldif as [uint8]);
}

if_begin ::= .
{
	var newif := Alloc(@bytesof IfLabels) as [IfLabels];
	newif.next := current_if;
	current_if := newif;
	current_if.exit_label := AllocLabel();
}

if_conditional ::= conditional(C).
{
	current_if.true_label := C.beqs0.truelabel;
	current_if.false_label := C.beqs0.falselabel;
	C.beqs0.fallthrough := current_if.true_label;
	Generate(C);
	Generate(MidLabel(current_if.true_label));
}

if_statements ::= statements.
{
	Generate(MidJump(current_if.exit_label));
	Generate(MidLabel(current_if.false_label));
}

if_optional_else ::= .
if_optional_else ::= ELSE statements.
if_optional_else ::= ELSEIF if_conditional THEN if_statements if_optional_else.

/* --- Case -------------------------------------------------------------- */

statement ::= startcase whens END CASE SEMICOLON.
{
	if (current_case.seenelse == 0) and (current_case.next_label != 0) then
		Generate(MidLabel(current_case.next_label));
	end if;
	Generate(MidLabel(current_case.break_label));

	var c := current_case;
	current_case := c.old_case;
	Free(c as [uint8]);
}

startcase ::= CASE expression(E) IS.
{
	var c := Alloc(@bytesof CaseLabels) as [CaseLabels];
	c.old_case := current_case;
	c.old_break_label := break_label;
	c.break_label := AllocLabel();
	current_case := c;

	if IsNum(E.type) == 0 then
		SimpleError("case only works on numbers");
	end if;

	c.width := NodeWidth(E);
	Generate(MidStartcase(c.width, E));
}

whens ::= .
whens ::= when whens.

when ::= beginwhen statements.

beginwhen ::= WHEN cvalue(C) COLON.
{
	if current_case.seenelse != 0 then
		SimpleError("when else must go last");
	end if;

	if current_case.next_label != 0 then
		Generate(MidJump(current_case.break_label));
		Generate(MidLabel(current_case.next_label));
	end if;
	current_case.next_label := AllocLabel();

	Generate(MidWhencase(current_case.width, C, current_case.next_label));
}

beginwhen ::= WHEN ELSE COLON.
{
	if current_case.seenelse != 0 then
		SimpleError("only one when else allowed");
	end if;
	if current_case.next_label != 0 then
		Generate(MidJump(current_case.break_label));
		Generate(MidLabel(current_case.next_label));
	end if;
	current_case.next_label := 0;

	current_case.seenelse := 1;
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

	sub ConditionalLt(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node])
		CondSimple(lhs, rhs);
		var truelabel := AllocLabel();
		var falselabel := AllocLabel();
		var w := NodeWidth(lhs);

		if IsSNum(lhs.type) != 0 then
			result := MidBlts(w, lhs, rhs, truelabel, falselabel, 0, negated);
		else
			result := MidBltu(w, lhs, rhs, truelabel, falselabel, 0, negated);
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

conditional(R) ::= expression(T1) LTOP expression(T2).
{
	R := ConditionalLt(T1, T2, 0);
}

conditional(R) ::= expression(T1) GEOP expression(T2).
{
	R := ConditionalLt(T1, T2, 1);
}

conditional(R) ::= expression(T1) GTOP expression(T2).
{
	R := ConditionalLt(T2, T1, 0);
}

conditional(R) ::= expression(T1) LEOP expression(T2).
{
	R := ConditionalLt(T2, T1, 1);
}

/* --- Expressions ------------------------------------------------------- */

%type expression {[Node]}
expression(E) ::= NUMBER(T).                               { E := MidConstant(T.number); }
expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.     { E := E1; }
expression(E) ::= MINUS expression(E1).                    { E := ExprNeg(E1); }
expression(E) ::= TILDE expression(E1).                    { E := ExprNot(E1); }
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

expression(E) ::= expression(E1) AS typeref(T).
{
	CheckNotPartialType(T);
	if (E1.op != MIDCODE_CONSTANT) and (E1.type.typedata.width != T.typedata.width) then
		if (IsPtr(E1.type) != 0) or (IsPtr(T) != 0) then
			SimpleError("cast between pointer and non-pointer of different size");
		end if;

		E := MidCCast(T.typedata.width as uint8, E1, IsSNum(E1.type));
	else
		E := E1;
	end if;
	E.type := T;
}

expression(E) ::= AMPERSAND expression(E1).
{
	E := UndoLValue(E1);
}

%include
{
	sub parser_i_bad_next_prev()
		SimpleError("@next and @prev only work on pointers");
	end sub;
}

expression(E) ::= NEXT expression(E1).
{
	if IsPtr(E1.type) == 0 then
		parser_i_bad_next_prev();
	end if;
	E := MidCAdd(
		intptr_type.typedata.width as uint8,
		E1,
		MidConstant(E1.type.typedata.pointertype.element.typedata.stride as Arith)
	);
	E.type := E1.type;
}

expression(E) ::= PREV expression(E1).
{
	if IsPtr(E1.type) == 0 then
		parser_i_bad_next_prev();
	end if;
	E := MidCSub(
		intptr_type.typedata.width as uint8,
		E1,
		MidConstant(E1.type.typedata.pointertype.element.typedata.stride as Arith)
	);
	E.type := E1.type;
}

expression(E) ::= BYTESOF varortypeid(T).
{
	E := MidConstant(T.typedata.width as Arith);
}

expression(E) ::= SIZEOF varortypeid(T).
{
	if IsArray(T) == 0 then
		SimpleError("array expected");
	end if;
	E := MidConstant(T.typedata.arraytype.size as Arith);
}

expression(E) ::= oldid(S).
{
	case S.kind is
		when CONST:
			E := MidConstant(S.constant);

		when VAR:
			E := MidAddress(S, 0);
			E.type := MakePointerType(S.vardata.type);
			E := MakeLValue(E);

		when else:
			StartError();
			print(S.name);
			print(" is not a value");
			EndError();
	end case;
}

expression(E) ::= OPENSQ expression(E1) CLOSESQ.
{
	if IsPtr(E1.type) == 0 then
		SimpleError("cannot dereference non-pointers");
	end if;

	E := MakeLValue(E1);
}

expression(E) ::= expression(E1) OPENSQ expression(E2) CLOSESQ.
{
	var type := E1.type;
	var address := UndoLValue(E1);

	if IsArray(type) == 0 then
		StartError();
		print("you can only index an array, not a ");
		print(type.name);
		EndError();
	end if;

	CheckExpressionType(E2, type.typedata.arraytype.indextype);
	if IsNum(E2.type) == 0 then
		SimpleError("array indices must be numbers");
	end if;

	var elementtype := type.typedata.arraytype.element;
	var w := intptr_type.typedata.width as uint8;

	var displacement := MidCMul(w,
				MidCCast(intptr_type.typedata.width as uint8, E2, 0),
				MidConstant(elementtype.typedata.stride as int32));
	displacement.type := intptr_type;

	var adjustedaddress := MidCAdd(w, address, displacement);
	adjustedaddress.type := MakePointerType(elementtype);
	E := MakeLValue(adjustedaddress);
}

expression(E) ::= expression(E1) DOT ID(X).
{
	var type := E1.type;
	var address := UndoLValue(E1);

	# Dereference pointers.

	while IsPtr(type) != 0 loop
		type := type.typedata.pointertype.element;
		CheckNotPartialType(type);
		address := MidLoad(intptr_type.typedata.width as uint8, address);
	end loop;
	CheckNotPartialType(type);

	if IsRecord(type) == 0 then
		StartError();
		print(type.name);
		print(" is not a record or pointer to a record");
		EndError();
	end if;

	var member := LookupSymbol(&type.typedata.recordtype.namespace, X.string);
	if member == (0 as [Symbol]) then
		StartError();
		print(type.name);
		print(" does not contain a member '");
		print(X.string);
		print("'");
		EndError();
	end if;

	E := MidCAdd(intptr_type.typedata.width as uint8, address, MidConstant(member.vardata.offset as Arith));
	E.type := MakePointerType(member.vardata.type);
	E := MakeLValue(E);
}

expression(E) ::= STRING(S).
{
	E := MidString(S.string);
	S.string := 0 as string;
	E.type := MakePointerType(uint8_type);
}

%include
{
	sub parser_i_constant_error()
		SimpleError("only constant values are allowed here");
	end sub;
}

%type cvalue {Arith}
cvalue(C) ::= expression(E).
{
	if E.op != MIDCODE_CONSTANT then
		parser_i_constant_error();
	end if;
	C := E.constant.value;
}

statement ::= CONST newid(S) ASSIGN cvalue(C) SEMICOLON.
{
	S.kind := CONST;
	S.constant := C;
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

typeref(S) ::= OPENSQ typeref(S1) CLOSESQ.
{
	S := MakePointerType(S1);
}

typeref(S) ::= typeref(S1) OPENSQ cvalue(C) CLOSESQ.
{
	S := MakeArrayType(S1, C as uint16);
}

typeref(S) ::= typeref(S1) OPENSQ CLOSESQ.
{
	S := MakeArrayType(S1, 0);
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

%type varortypeid {[Symbol]}
varortypeid(T) ::= oldid(S).
{
	if S.kind == VAR then
		S := S.vardata.type;
	end if;
	if S.kind != TYPE then
		SimpleError("simple type or variable name expected");
	end if;
	T := S;
}

varortypeid(T) ::= OPENPAREN typeref(T1) CLOSEPAREN.
{
	T := T1;
}

/* --- Subroutine calls -------------------------------------------------- */

%include
{
	sub i_check_sub_call_args()
		var subr := current_call.subr;
		if current_call.num_input_args != subr.num_input_parameters then
			StartError();
			print("subroutine ");
			print(subr.name);
			print(" takes ");
			print_i8(subr.num_input_parameters);
			print(" but was given ");
			print_i8(current_call.num_input_args);
			EndError();
		end if;
	end sub;

	sub i_end_call()
		EmitterReferenceSubroutine(current_subr, current_call.subr);
		var call := current_call;
		current_call := call.parent;
		Free(call as [uint8]);
	end sub;
}

expression(E) ::= startsubcall inputargs.
{
	var subr := current_call.subr;
	current_call.num_output_args := 1;
	i_check_sub_call_args();
	if subr.num_output_parameters != 1 then
		SimpleError("subroutines called as functions must have exactly one output parameter");
	end if;

	var param := subr.first_output_parameter;
	E := MidCalle(param.vardata.type.typedata.width as uint8, subr);
	E.type := param.vardata.type;

	i_end_call();
}

statement ::= startsubcall inputargs SEMICOLON.
{
	var subr := current_call.subr;
	i_check_sub_call_args();
	if subr.num_output_parameters != 0 then
		SimpleError("subroutine requires output arguments");
	end if;

	Generate(MidCall(subr));

	i_end_call();
}

statement ::= outputargs(A) ASSIGN startsubcall inputargs SEMICOLON.
{
	var subr := current_call.subr;
	i_check_sub_call_args();

	Generate(MidCall(subr));

	var paramindex := subr.num_output_parameters;
	var count: uint8 := 0;
	var node := A;
	while node != (0 as [Node]) loop
		if paramindex == 0 then
			SimpleError("too many output arguments");
		end if;

		paramindex := paramindex - 1;
		var param := GetOutputParameter(subr, paramindex);

		var arg := node.left;
		node.left := (0 as [Node]);
		node := node.right;

		if IsPtr(arg.type) == 0 then
			SimpleError("you can only assign to lvalues");
		end if;

		CheckExpressionType(arg, MakePointerType(param.vardata.type));
		CheckNotPartialType(param.vardata.type);
		CheckNotPartialType(arg.type);
		Generate(MidPoparg(param.vardata.type.typedata.width as uint8, arg, subr, count));

		count := count + 1;
		param := param.vardata.next_parameter;
	end loop;
	Discard(A);

	if count != subr.num_output_parameters then
		SimpleError("too few output arguments");
	end if;

	i_end_call();
}

startsubcall ::= oldid(S).
{
	if S.kind != SUB then
		StartError();
		print("expected ");
		print(S.name);
		print(" to be a subroutine");
		EndError();
	end if;

	var call := Alloc(@bytesof SubroutineCall) as [SubroutineCall];
	call.parent := current_call;
	call.subr := S.subr;
	call.input_parameter := S.subr.first_input_parameter;
	call.output_parameter := S.subr.first_output_parameter;
	current_call := call;
}

inputargs ::= OPENPAREN CLOSEPAREN.
inputargs ::= OPENPAREN inputarglist CLOSEPAREN.

inputarglist ::= inputarg.
inputarglist ::= inputarglist COMMA inputarg.

inputarg ::= expression(E).
{
	var param := current_call.input_parameter;
	if param == (0 as [Symbol]) then
		StartError();
		print("too many parameters in call to ");
		print(current_call.subr.name);
		EndError();
	end if;

	current_call.input_parameter := current_call.input_parameter.vardata.next_parameter;
	CheckExpressionType(E, param.vardata.type);
	CheckNotPartialType(param.vardata.type);
	CheckNotPartialType(E.type);
	Generate(MidPusharg(NodeWidth(E), E, current_call.subr, current_call.num_input_args));
	current_call.num_input_args := current_call.num_input_args + 1;
}

/* Output arguments get parsed before we know what subroutine they belong
 * to. So, we can't type check and emit code for them. Instead we assemble
 * them into a chain of PAIRs so that the rule above which handles multi-
 * return-value statements can do the type checking and codegen. */

%type outputargs {[Node]}
outputargs(R) ::= OPENPAREN outputarglist(L) COMMA outputarg(E) CLOSEPAREN.
{
	R := MidPair(E, L);
}

%type outputarglist {[Node]}
outputarglist(A) ::= outputarg(E).
{
	A := MidPair(E, 0 as [Node]);
}

outputarglist(A) ::= outputarglist(L) COMMA outputarg(E).
{
	A := MidPair(E, L);
}

%type outputarg {[Node]}
outputarg(E) ::= expression(E1).
{
	E := UndoLValue(E1);
}

/* --- Subroutine definitions -------------------------------------------- */

statement ::= SUB substart subparams subgen statements END SUB.
{
	Generate(MidEndsub(current_subr));

	break_label := current_subr.old_break_label;
	continue_label := current_subr.old_continue_label;
	current_subr := current_subr.parent;
}

substart ::= newid(S).
{
	var subr := Alloc(@bytesof Subroutine) as [Subroutine];
	subr.name := S.name;
	subr.namespace.parent := &current_subr.namespace;
	subr.id := AllocLabel();
	subr.old_break_label := break_label;
	break_label := 0;
	subr.old_continue_label := continue_label;
	continue_label := 0;

	S.kind := SUB;
	S.subr := subr;

	# Make sure that this subroutine refers to its lexical parent.

	EmitterDeclareSubroutine(subr);
	EmitterReferenceSubroutine(subr, current_subr);

	subr.parent := current_subr;
	current_subr := subr;
}

subgen ::= .
{
	Generate(MidStartsub(current_subr));
}

subparams ::= inparamlist.
{
	current_subr.num_output_parameters := 0;
}

subparams ::= inparamlist COLON paramlist(OUTS).
{
	current_subr.first_output_parameter := OUTS;
	current_subr.num_output_parameters := CountParameters(OUTS);
}

inparamlist ::= paramlist(INS).
{
	current_subr.first_input_parameter := INS;
	current_subr.num_input_parameters := CountParameters(INS);
}

%type paramlist {[Symbol]}
paramlist(R) ::= OPENPAREN CLOSEPAREN.
{
	R := 0 as [Symbol];
}

paramlist(R) ::= OPENPAREN params(R1) CLOSEPAREN.
{
	R := R1;
}

%type params {[Symbol]}
params(R) ::= param(P).
{
	R := P;
}

params(R) ::= param(P) COMMA params(R1).
{
	P.vardata.next_parameter := R1;
	R := P;
}

%type param {[Symbol]}
param(R) ::= newid(S) COLON typeref(T).
{
	S.kind := VAR;
	InitVariable(S, T);
	R := S;
}

/* --- Records ----------------------------------------------------------- */

%include
{
	sub SymbolRedeclarationError()
		StartError();
		print("attempt to redefine ");
		print(current_type.name);
		EndError();
	end sub;
}

statement ::= RECORD recordstart recordinherits recordmembers END RECORD.
{
	current_type.typedata.stride := ArchAlignUp(
		current_type.typedata.width, current_type.typedata.alignment);
}

recordstart ::= eitherid(S).
{
	current_type := S;
	if (current_type.kind != 0) and (current_type.kind != TYPE) then
		SymbolRedeclarationError();
	end if;
	if (current_type.typedata.kind != 0) and (current_type.typedata.kind != TYPE_PARTIAL) then
		SymbolRedeclarationError();
	end if;
	current_type.kind := TYPE;
	current_type.typedata.kind := TYPE_RECORD;
}

recordinherits ::= .

recordinherits ::= COLON typeref(T).
{
	CheckNotPartialType(T);
	if IsRecord(T) == 0 then
		StartError();
		print(T.name);
		print(" is not a record type");
		EndError();
	end if;

	current_type.typedata.alignment := T.typedata.alignment;
	current_type.typedata.width := T.typedata.width;
	current_type.typedata.recordtype.namespace.parent := &T.typedata.recordtype.namespace;
}

recordmembers ::= .
recordmembers ::= recordmember recordmembers.

recordmember ::= memberid(S) recordat(A) COLON typeref(T) SEMICOLON.
{
	CheckNotPartialType(T);
	S.kind := VAR;
	S.vardata.type := T;
	if T.typedata.alignment > current_type.typedata.alignment then
		current_type.typedata.alignment := T.typedata.alignment;
	end if;
	ArchInitMember(current_type, S, A);
}

%type recordat {Size}
recordat(A) ::= .
{
	A := current_type.typedata.width;
}

recordat(A) ::= AT OPENPAREN cvalue(C) CLOSEPAREN.
{
	A := C as Size;
}

%type memberid {[Symbol]}
memberid(S) ::= ID(T).
{
	S := AddSymbol(&current_type.typedata.recordtype.namespace, T);
	current_type.typedata.recordtype.members := current_type.typedata.recordtype.members + 1;
}

/* --- Static initialisers ----------------------------------------------- */

%include
{
	var current_member: [Symbol]; # for records only
	var current_offset: Size;

	record NestedTypeInit
		old_current_type: [Symbol];
		old_current_member: [Symbol];
		old_current_offset: Size;
	end record;

	sub WrongNumberOfElementsError()
		StartError();
		print("wrong number of elements in initialiser for ");
		print(current_type.name);
		EndError();
	end sub;

	sub CheckEndOfInitialiser()
		if IsArray(current_type) != 0 then
			var memberwidth := current_type.typedata.arraytype.element.typedata.stride;
			if current_type.typedata.width == 0 then
				current_type.typedata.width := current_offset;
				current_type.typedata.arraytype.size := current_offset / memberwidth;
			end if;
			if current_offset != current_type.typedata.width then
				WrongNumberOfElementsError();
			end if;
		else
			if current_member != (0 as [Symbol]) then
				WrongNumberOfElementsError();
			end if;
		end if;
	end sub;

	sub GetInitedMember(): (member: [Symbol], type: [Symbol])
		member := 0 as [Symbol];

		if IsArray(current_type) != 0 then
			type := current_type.typedata.arraytype.element;
		else
			if current_member == (0 as [Symbol]) then
				type := 0 as [Symbol];
				return;
			end if;

			member := current_member;
			type := current_member.vardata.type;
			current_member := current_member.next;
		end if;
	end sub;

	sub AlignTo(alignment: uint8)
		var newoffset := ArchAlignUp(current_offset, alignment);
		while current_offset != newoffset loop
			Generate(MidInit(1, 0));
			current_offset := current_offset + 1;
		end loop;
	end sub;

	sub CheckForOverlaps(member: [Symbol])
		# Not for arrays.
		if member == (0 as [Symbol]) then
			return;
		end if;

		if member.vardata.offset < current_offset then
			SimpleError("out of order static initialisation");
		end if;
	end sub;

	sub GetInitedMemberChecked(): (member: [Symbol], type: [Symbol])
		(member, type) := GetInitedMember();
		if type == (0 as [Symbol]) then
			print("no type\n");
			WrongNumberOfElementsError();
		end if;

		AlignTo(type.typedata.alignment);
		CheckForOverlaps(member);
	end sub;
}

statement ::= initdecl OPENBR initialisers CLOSEBR SEMICOLON.
{
	CheckEndOfInitialiser();
	Generate(MidEndinit());
}

initdecl ::= VAR newid(S) COLON typeref(T) ASSIGN.
{
	# We don't call InitVariable() because we don't want this variable
	# allocated to a workspace.

	CheckNotPartialType(T);
	S.kind := VAR;
	S.vardata.type := T;
	S.vardata.subr := current_subr;
	var name := Alloc(7);
	S.vardata.externname := name;
	[name+0] := 'a';
	var ptr := UIToA(AllocLabel() as uint32, 10, name+1);

	if (IsArray(T) == 0) and (IsRecord(T) == 0) then
		SimpleError("static initialisers only work on arrays or records");
	end if;
	if (IsRecord(T) != 0) and (T.typedata.recordtype.namespace.parent != (0 as [Namespace])) then
		SimpleError("you can't statically initialise an inherited record");
	end if;

	if IsRecord(T) != 0 then
		current_member := T.typedata.recordtype.namespace.first;
	end if;

	current_type := T;
	current_offset := 0;

	Generate(MidStartinit(S));
}

initialisers ::= initialiser.
initialisers ::= initialisers COMMA initialiser.

initialiser ::= .

initialiser ::= expression(E).
{
	var member: [Symbol];
	var type: [Symbol];
	(member, type) := GetInitedMemberChecked();

	var w := type.typedata.width;
	case E.op is
		when MIDCODE_CONSTANT:
			if IsNum(type) == 0 then
				SimpleError("initialiser must be an number");
			end if;
			Generate(MidInit(w as uint8, E.constant.value));

		when MIDCODE_STRING:
			if (IsPtr(type) == 0) or (type.typedata.pointertype.element != uint8_type) then
				SimpleError("initialiser must be a string");
			end if;
			Generate(MidInits(E.string.text));

		when else:
			parser_i_constant_error();
	end case;

	current_offset := current_offset + w;
}

initialiser ::= startbracedinitialiser(R) initialisers CLOSEBR.
{
	CheckEndOfInitialiser();

	current_type := R.old_current_type;
	current_member := R.old_current_member;
	current_offset := R.old_current_offset;
	Free(R as [uint8]);
}

%type startbracedinitialiser {[NestedTypeInit]}
startbracedinitialiser(R) ::= OPENBR.
{
	var member: [Symbol];
	var type: [Symbol];
	(member, type) := GetInitedMemberChecked();

	R := Alloc(@bytesof NestedTypeInit) as [NestedTypeInit];
	R.old_current_type := current_type;
	R.old_current_member := current_member;
	R.old_current_offset := current_offset;

	current_type := type;
	current_offset := 0;
	if IsRecord(type) != 0 then
		current_member := type.typedata.recordtype.namespace.first;
	elseif IsArray(type) != 0 then
		current_member := 0 as [Symbol];
	else
		SimpleError("braced initialised can only initialise arrays or records");
	end if;
}

/* --- Inline assembly --------------------------------------------------- */

statement ::= asmstart asms SEMICOLON.
{
	Generate(MidAsmend());
}

asmstart ::= ASM.
{
	Generate(MidAsmstart());
}

asms ::= asm.
asms ::= asm COMMA asms.

asm ::= STRING(T).
{
	Generate(MidAsmtext(T.string));
	Free(T.string);
	T.string := 0 as string;
}

asm ::= NUMBER(T).
{
	Generate(MidAsmvalue(T.number));
}

asm ::= oldid(S).
{
	var k := S.kind;
	if (k == VAR) or (k == SUB) then
		Generate(MidAsmsymbol(S));
	elseif k == CONST then
		Generate(MidAsmvalue(S.constant));
	else
		SimpleError("you can only emit references to variables, subroutines, or constants");
	end if;
}

