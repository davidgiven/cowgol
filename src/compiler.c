#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"
#include "midcodes.h"
#include "parser.h"
#include "compiler.h"
#include "codegen.h"

int32_t number;
struct subroutine* current_sub;
struct symbol* current_type;
struct symbol* intptr_type;
struct symbol* uint8_type;

bool is_ptr(struct symbol* sym)
{
	if (!sym || (sym->kind != TYPE))
		return false;
	return sym->u.type.kind == TYPE_POINTER;
}

bool is_num(struct symbol* sym)
{
	if (!sym)
		return true; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_NUMBER;
}

bool is_snum(struct symbol* sym)
{
	if (!sym)
		return true; /* for numeric constants */
	return is_num(sym) && sym->u.type.issigned;
}

bool is_array(struct symbol* sym)
{
	if (!sym)
		return false; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_ARRAY;
}

bool is_array_ptr(struct symbol* sym)
{
	return is_ptr(sym) && is_array(sym->u.type.element);
}

bool is_scalar(struct symbol* sym)
{
	return (is_ptr(sym) || is_num(sym));
}

bool is_record(struct symbol* sym)
{
	if (!sym)
		return false; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_RECORD;
}

bool is_record_ptr(struct symbol* sym)
{
	return is_ptr(sym) && is_record(sym->u.type.element);
}

void resolve_untyped_constants_for_add_sub(struct symbol** lhs, struct symbol** rhs)
{
	if (*lhs && !*rhs)
	{
		if (is_num(*lhs))
			*rhs = *lhs;
		else if (is_ptr(*lhs))
			*rhs = intptr_type;
		else
			fatal("cannot use an untyped constant in this context");
	}
	if (!*lhs && *rhs)
	{
		if (is_num(*rhs))
			*lhs = *rhs;
		else if (is_ptr(*rhs))
			fatal("pointers may only appear on the LHS of an addition or subtraction");
	}
}

struct midnode* expr_add(struct midnode* lhs, struct midnode* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs->type, &rhs->type);

	if (is_ptr(lhs->type) && is_ptr(rhs->type))
		fatal("you cannot add two pointers together");
	else if (is_ptr(lhs->type) && (rhs->type != intptr_type))
		fatal("you can't add a %s to a %s", rhs->type->name, lhs->type->name);
	else if (is_ptr(rhs->type))
		fatal("add numbers to pointers, not vice versa");
	else if (!is_ptr(lhs->type) && (lhs->type != rhs->type))
		fatal("you tried to add a %s and a %s", lhs->type->name, rhs->type->name);

	struct midnode* r = mid_c_add(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	r->type = lhs->type;
	return r;
}

struct midnode* expr_sub(struct midnode* lhs, struct midnode* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs->type, &rhs->type);

	if (is_ptr(lhs->type) && !is_ptr(rhs->type) && (rhs->type != intptr_type))
		fatal("you can't subtract a %s from a %s", rhs->type->name, lhs->type->name);
	else if (is_num(lhs->type) && is_ptr(rhs->type))
		fatal("subtract numbers from pointers, not vice versa");
	else if (is_num(lhs->type) && is_num(rhs->type) && (lhs->type != rhs->type))
		fatal("you tried to subtract a %s and a %s", lhs->type->name, rhs->type->name);

	struct midnode* r = mid_c_sub(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	if (is_ptr(lhs->type) && is_ptr(rhs->type))
		r->type = intptr_type;
	else
		r->type = lhs->type;
	return r;
}

void resolve_untyped_constants_simply(struct symbol** lhs, struct symbol** rhs)
{
	if (*lhs && !*rhs)
		*rhs = *lhs;
	else if (!*lhs && *rhs)
		*lhs = *rhs;
	else if (*lhs != *rhs)
		fatal("type mismatch with %s and %s", (*lhs)->name, (*rhs)->name);
}

struct midnode* expr_simple(struct midnode* lhs, struct midnode* rhs,
	struct midnode* (*emitter)(int width, struct midnode* lhs, struct midnode* rhs))
{
	resolve_untyped_constants_simply(&lhs->type, &rhs->type);
	if (!is_num(lhs->type) || !is_num(rhs->type))
		fatal("number required");

	struct midnode* r = emitter(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	r->type = lhs->type;
	return r;
}

struct midnode* expr_signed(struct midnode* lhs, struct midnode* rhs,
	struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
	struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs))
{
	resolve_untyped_constants_simply(&lhs->type, &rhs->type);
	if (!is_num(lhs->type) || !is_num(rhs->type))
		fatal("number required");

	struct midnode* r = (is_snum(lhs->type) ? emitters : emitteru)
		(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	r->type = lhs->type;
	return r;
}

struct midnode* expr_shift(struct midnode* lhs, struct midnode* rhs,
	struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
	struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs))
{
	if (!is_num(lhs->type))
		fatal("number required on LHS of shift");
	if (!rhs->type)
		rhs->type = uint8_type;
	if (rhs->type != uint8_type)
		fatal("uint8 required on RHS of shift");

	if (!lhs->type && rhs->type)
		fatal("untyped constants not allowed on LHS of shift unless RHS is also an untype constant");

	struct midnode* r = (is_snum(lhs->type) ? emitters : emitteru)
		(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	r->type = lhs->type;
	return r;
}

void cond_simple(int truelabel, int falselabel, struct midnode* lhs, struct midnode* rhs,
	struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel),
	struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel))
{
	resolve_untyped_constants_simply(&lhs->type, &rhs->type);
	if (lhs->type != rhs->type)
		fatal("you tried to compare a %s and a %s", lhs->type->name, rhs->type->name);

	generate(
		(is_snum(lhs->type) ? emitters : emitteru)
			(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs, truelabel, falselabel));
}

struct symbol* dealias(struct symbol* sym)
{
	while (sym->kind == TYPE_ALIAS)
		sym = sym->u.alias;
	return sym;
}

struct symbol* add_new_symbol(struct namespace* namespace, const char* name)
{
	if (!namespace)
		namespace = &current_sub->namespace;
	
	struct symbol* sym;
	if (name)
	{
		sym = namespace->firstsymbol;
		while (sym)
		{
			if (strcmp(sym->name, name) == 0)
				fatal("symbol '%s' is already defined", name);
			sym = sym->next;
		}
	}

	sym = calloc(1, sizeof(struct symbol));
	sym->name = name ? strdup(name) : NULL;

	if (name)
	{
		if (!namespace->lastsymbol)
			namespace->firstsymbol = namespace->lastsymbol = sym;
		else
		{
			namespace->lastsymbol->next = sym;
			namespace->lastsymbol = sym;
		}
	}
	return sym;
}

struct symbol* add_alias(struct namespace* namespace, const char* name, struct symbol* real)
{
	struct symbol* sym = add_new_symbol(namespace, name);
	sym->kind = TYPE_ALIAS;
	sym->u.alias = real;
	return sym;
}

struct symbol* lookup_symbol(struct namespace* namespace, const char* name)
{
	if (!namespace)
		namespace = &current_sub->namespace;

	while (namespace)
	{
		struct symbol* sym = namespace->firstsymbol;
		while (sym)
		{
			if (strcmp(sym->name, name) == 0)
				return dealias(sym);
			sym = sym->next;
		}
		namespace = namespace->parent;
	}

	return NULL;
}

void init_var(struct symbol* sym, struct symbol* type)
{
	check_non_partial_type(type);
	sym->u.var.type = type;
	sym->u.var.sub = current_sub;
	arch_init_variable(sym);
}

void symbol_redeclaration(Symbol* sym)
{
	fatal("attempt to redefine symbol '%s'", sym->name);
}

/* node must not be a partial type. */
void check_non_partial_type(Symbol* sym)
{
	if (sym->u.type.kind == TYPE_PARTIAL)
		fatal("attempt to use partial type '%s' in a context where it can't be partial",
			sym->name);
}

/* node must be on the top of the midend stack. */
void check_expression_type(struct symbol** node, struct symbol* type)
{
	if (!*node)
		*node = type;

	if (*node != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			(*node)->name, type->name);
	if (!is_ptr(type) && !is_num(type))
		fatal("%s cannot be used in this kind of expression", type->name);
}

struct symbol* make_number_type(const char* name, int width, bool issigned)
{
	struct symbol* ptr = add_new_symbol(NULL, name);
	ptr->name = name;
	ptr->kind = TYPE;
	ptr->u.type.kind = TYPE_NUMBER;
	ptr->u.type.width = width;
	ptr->u.type.stride = width;
	ptr->u.type.alignment = arch_align_up(1, width);
	ptr->u.type.issigned = issigned;
	return ptr;
}

struct symbol* make_pointer_type(struct symbol* type)
{
	if (type->u.type.pointerto)
		return type->u.type.pointerto;
	else
	{
		struct symbol* ptr = add_new_symbol(NULL, NULL);
		ptr->name = aprintf("[%s]", type->name);
		ptr->kind = TYPE;
		ptr->u.type.kind = TYPE_POINTER;
		ptr->u.type.width = intptr_type->u.type.width;
		ptr->u.type.stride = ptr->u.type.width;
		ptr->u.type.alignment = intptr_type->u.type.alignment;
		ptr->u.type.element = type;
		type->u.type.pointerto = ptr;
		return ptr;
	}
}

struct symbol* make_array_type(struct symbol* type, int32_t size)
{
	check_non_partial_type(type);

	struct symbol* ptr = add_new_symbol(NULL, NULL);
	ptr->name = aprintf("%s[%d]", type->name, size);
	ptr->kind = TYPE;
	ptr->u.type.kind = TYPE_ARRAY;
	ptr->u.type.width = size * type->u.type.stride;
	ptr->u.type.stride = type->u.type.stride;
	ptr->u.type.element = type;
	ptr->u.type.alignment = type->u.type.alignment;
	ptr->u.type.indextype = arch_guess_int_type(0, size-1);
	return ptr;
}

void unescape(char* string)
{
	char* pin = string;
	char* pout = string;
	char c = *pin++;
	for (;;)
	{
		if (c == '\\')
		{
			c = *pin++;
			switch (c)
			{
				case 'n': c = '\n'; break;
				case 'r': c = '\r'; break;
				case '"': c = '"'; break;
				case '\\': c = '\\'; break;
				default: fatal("unknown string escape");
			}
		}
		*pout++ = c;
		if (!c)
			break;
		c = *pin++;
	}
}

struct token* make_string_token(const char* string)
{
    struct token* token = calloc(1, sizeof(struct token));
    token->string = strdup(string);
    return token;
}

struct token* make_number_token(int32_t number)
{
    struct token* token = calloc(1, sizeof(struct token));
    token->number = number;
    return token;
}

void free_token(struct token* token)
{
    if (!token)
        return;
    if (token->string)
        free(token->string);
    free(token);
}

Symbol* get_input_parameter(Subroutine* sub, int count)
{
	Symbol* s = sub->first_input_parameter;
	while (count--)
		s = s->u.var.next_parameter;
	return s;
}

Symbol* get_output_parameter(Subroutine* sub, int count)
{
	Symbol* s = sub->first_output_parameter;
	while (count--)
		s = s->u.var.next_parameter;
	return s;
}

Node* mid_c_cast(int width, Node* lhs, bool sext)
{
	if (!lhs->type)
		return lhs;
	int srcwidth = lhs->type->u.type.width;
	if (width == srcwidth)
		return lhs;

	switch (srcwidth)
	{
		case 1: return mid_cast1(width, lhs, sext);
		case 2: return mid_cast2(width, lhs, sext);
		case 4: return mid_cast4(width, lhs, sext);
		case 8: return mid_cast8(width, lhs, sext);
		default: assert(false);
	}
}

Node* mid_c_neg(int width, Node* lhs)
{
	if (lhs->op == MIDCODE_CONSTANT)
	{
		lhs->u.constant.value *= -1;
		return lhs;
	}
	return mid_neg(width, lhs);
}

Node* mid_c_not(int width, Node* lhs)
{
	if (lhs->op == MIDCODE_CONSTANT)
	{
		lhs->u.constant.value = ~lhs->u.constant.value;
		return lhs;
	}
	return mid_not(width, lhs);
}

Node* mid_c_add(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value += rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	if (lhs->op == MIDCODE_CONSTANT)
	{
		Node* t = rhs;
		rhs = lhs;
		lhs = t;
	}
	if (rhs->op == MIDCODE_CONSTANT)
	{
		if (rhs->u.constant.value == 0)
		{
			discard(rhs);
			return lhs;
		}
		if (lhs->op == MIDCODE_ADDRESS)
		{
			lhs->u.address.off += rhs->u.constant.value;
			discard(rhs);
			return lhs;
		}
	}
	return mid_add(width, lhs, rhs);
}

Node* mid_c_sub(int width, Node* lhs, Node* rhs)
{
	if (rhs->op == MIDCODE_CONSTANT)
	{
		rhs->u.constant.value *= -1;
		return mid_c_add(width, lhs, rhs);
	}
	return mid_sub(width, lhs, rhs);
}

Node* mid_c_mul(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value *= rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	if (lhs->op == MIDCODE_CONSTANT)
	{
		Node* t = rhs;
		rhs = lhs;
		lhs = t;
	}
	if (rhs->op == MIDCODE_CONSTANT)
	{
		switch (rhs->u.constant.value)
		{
			case 1:
				discard(rhs);
				return lhs;

			case -1:
				discard(rhs);
				return mid_neg(width, lhs);

			case 0:
				discard(lhs);
				return rhs;
		}
	}
	return mid_mul(width, lhs, rhs);
}

Node* mid_c_divu(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value /= rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	return mid_divu(width, lhs, rhs);
}

Node* mid_c_divs(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value /= rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	return mid_divs(width, lhs, rhs);
}

Node* mid_c_remu(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value %= rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	return mid_remu(width, lhs, rhs);
}

Node* mid_c_rems(int width, Node* lhs, Node* rhs)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
	{
		lhs->u.constant.value %= rhs->u.constant.value;
		discard(rhs);
		return lhs;
	}
	return mid_rems(width, lhs, rhs);
}

Node* mid_c_beqs(int width, Node* lhs, Node* rhs, int truelabel, int falselabel)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
		return mid_jump(lhs->u.constant.value == rhs->u.constant.value ? truelabel : falselabel);
	return mid_beqs(width, lhs, rhs, truelabel, falselabel);
}
	
Node* mid_c_bequ(int width, Node* lhs, Node* rhs, int truelabel, int falselabel)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
		return mid_jump(lhs->u.constant.value == rhs->u.constant.value ? truelabel : falselabel);
	return mid_bequ(width, lhs, rhs, truelabel, falselabel);
}
	
Node* mid_c_blts(int width, Node* lhs, Node* rhs, int truelabel, int falselabel)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
		return mid_jump(lhs->u.constant.value < rhs->u.constant.value ? truelabel : falselabel);
	return mid_blts(width, lhs, rhs, truelabel, falselabel);
}
	
Node* mid_c_bltu(int width, Node* lhs, Node* rhs, int truelabel, int falselabel)
{
	if ((lhs->op == MIDCODE_CONSTANT) && (rhs->op == MIDCODE_CONSTANT))
		return mid_jump(lhs->u.constant.value < rhs->u.constant.value ? truelabel : falselabel);
	return mid_bltu(width, lhs, rhs, truelabel, falselabel);
}

