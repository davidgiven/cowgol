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
struct argumentsspec* current_call;
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

struct symbol* expr_add(struct symbol* lhs, struct symbol* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs, &rhs);

	if (is_ptr(lhs) && is_ptr(rhs))
		fatal("you cannot add two pointers together");
	else if (is_ptr(lhs) && (rhs != intptr_type))
		fatal("you can only add a %s to a pointer", rhs->name);
	else if (is_ptr(rhs))
		fatal("add numbers to pointers, not vice versa");
	else if (!is_ptr(lhs) && (lhs != rhs))
		fatal("you tried to add a %s and a %s", lhs->name, rhs->name);

	if (is_ptr(lhs))
		emit_mid_addp(intptr_type->u.type.width);
	else
		emit_mid_add(lhs ? lhs->u.type.width : 0);
	return lhs;
}

struct symbol* expr_sub(struct symbol* lhs, struct symbol* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs, &rhs);

	if (is_ptr(lhs) && !is_ptr(rhs) && (rhs != intptr_type))
		fatal("you can't subtrack a %s and a %s", lhs->name, rhs->name);
	else if (is_num(lhs) && is_ptr(rhs))
		fatal("subtract numbers from pointers, not vice versa");
	else if (is_num(lhs) && is_num(rhs) && (lhs != rhs))
		fatal("you tried to subtract a %s and a %s", lhs->name, rhs->name);

	if (is_ptr(rhs))
	{
		emit_mid_subp(intptr_type->u.type.width);
		return intptr_type;
	}
	else
	{
		emit_mid_sub(lhs ? lhs->u.type.width : 0);
		return lhs;
	}
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

struct symbol* expr_simple(struct symbol* lhs, struct symbol* rhs, void (*emitter)(int width))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (!is_num(lhs) || !is_num(rhs))
		fatal("number required");

	emitter(lhs ? lhs->u.type.width : 0);
	return lhs;
}

struct symbol* expr_signed(struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width),
	void (*emitters)(int width))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (!is_num(lhs) || !is_num(rhs))
		fatal("number required");

	(is_snum(lhs) ? emitters : emitteru)(lhs ? lhs->u.type.width : 0);
	return lhs;
}

void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width, int truelabel, int falselabel),
	void (*emitters)(int width, int truelabel, int falselabel),
	void (*emitterp)(int truelabel, int falselabel))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (lhs != rhs)
		fatal("you tried to compare a %s and a %s", lhs->name, rhs->name);

	if (is_ptr(lhs))
		emitterp(truelabel, falselabel);
	else
		(is_snum(lhs) ? emitters : emitteru)(lhs->u.type.width, truelabel, falselabel);
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
	sym->u.var.offset = current_sub->workspace;
	arch_init_variable(sym);
	current_sub->workspace += type->u.type.width;
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
