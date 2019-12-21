#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"
#include "midcode.h"
#include "parser.h"
#include "compiler.h"

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
	return is_num(sym);
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
		fatal("you can only add a %s to a pointer", rhs->type->name);
	else if (is_ptr(rhs->type))
		fatal("add numbers to pointers, not vice versa");
	else if (!is_ptr(lhs->type) && (lhs->type != rhs->type))
		fatal("you tried to add a %s and a %s", lhs->type->name, rhs->type->name);

	struct midnode* r = mid_add(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
	r->type = lhs->type;
	return r;
}

struct midnode* expr_sub(struct midnode* lhs, struct midnode* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs->type, &rhs->type);

	if (is_ptr(lhs->type) && !is_ptr(rhs->type) && (rhs->type != intptr_type))
		fatal("you can't subtrack a %s and a %s", lhs->type->name, rhs->type->name);
	else if (is_num(lhs->type) && is_ptr(rhs->type))
		fatal("subtract numbers from pointers, not vice versa");
	else if (is_num(lhs->type) && is_num(rhs->type) && (lhs->type != rhs->type))
		fatal("you tried to subtract a %s and a %s", lhs->type->name, rhs->type->name);

	struct midnode* r = mid_sub(lhs->type ? lhs->type->u.type.width : 0, lhs, rhs);
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
			(lhs->type->u.type.width, lhs, rhs, truelabel, falselabel));
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
				return sym;
			sym = sym->next;
		}
		namespace = namespace->parent;
	}

	fatal("symbol '%s' not found", name);
	return NULL;
}

void init_var(struct symbol* sym, struct symbol* type)
{
	sym->u.var.type = type;
	sym->u.var.sub = current_sub;
	sym->u.var.offset = current_sub->workspace[0];
	arch_init_variable(sym);
	current_sub->workspace[0] += type->u.type.width;
}

void init_member(struct symbol* sym, struct symbol* type)
{
	sym->u.var.type = type;
	sym->u.var.offset = current_type->u.type.width;
	current_type->u.type.width += type->u.type.width;
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
		ptr->u.type.element = type;
		type->u.type.pointerto = ptr;
		return ptr;
	}
}

struct symbol* make_array_type(struct symbol* type, int32_t size)
{
	struct symbol* ptr = add_new_symbol(NULL, NULL);
	ptr->name = aprintf("%s[%d]", type->name, size);
	ptr->kind = TYPE;
	ptr->u.type.kind = TYPE_ARRAY;
	ptr->u.type.width = size * type->u.type.width;
	ptr->u.type.element = type;
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

void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off)
{
	node->type = type;
	node->sym = sym;
	node->off = off;
	node->constant = true;
}

void node_is_stacked(struct exprnode* node, struct symbol* type)
{
	node->type = type;
	node->sym = NULL;
	node->off = 0;
	node->constant = false;
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
