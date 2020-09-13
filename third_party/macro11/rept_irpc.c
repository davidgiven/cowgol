#define REPT_IRPC__C

/*
        .REPT
        .IRPC streams
*/

#include <stdlib.h>
#include <string.h>

#include "rept_irpc.h"                 /* my own definitions */

#include "util.h"
#include "assemble_aux.h"
#include "parse.h"
#include "listing.h"
#include "macros.h"
#include "assemble_globals.h"


/* *** implement REPT_STREAM */

typedef struct rept_stream {
    BUFFER_STREAM   bstr;
    int             count;      /* The current repeat countdown */
    int             savecond;   /* conditional stack level at time of
                                   expansion */
} REPT_STREAM;

/* rept_stream_gets gets a line from a repeat stream.  At the end of
   each count, the coutdown is decreated and the stream is reset to
   it's beginning. */

char           *rept_stream_gets(
    STREAM *str)
{
    REPT_STREAM    *rstr = (REPT_STREAM *) str;
    char           *cp;

    for (;;) {
        if ((cp = buffer_stream_gets(str)) != NULL)
            return cp;

        if (--rstr->count <= 0)
            return NULL;

        buffer_stream_rewind(str);
    }
}

/* rept_stream_delete unwinds nested conditionals like .MEXIT does. */

void rept_stream_delete(
    STREAM *str)
{
    REPT_STREAM    *rstr = (REPT_STREAM *) str;

    pop_cond(rstr->savecond);          /* complete unterminated
                                          conditionals */
    buffer_stream_delete(&rstr->bstr.stream);
}

/* The VTBL */

STREAM_VTBL     rept_stream_vtbl = {
    rept_stream_delete, rept_stream_gets, buffer_stream_rewind
};

/* expand_rept is called when a .REPT is encountered in the input. */

STREAM         *expand_rept(
    STACK *stack,
    char *cp)
{
    EX_TREE        *value;
    BUFFER         *gb;
    REPT_STREAM    *rstr;
    int             levelmod;

    value = parse_expr(cp, 0);
    if (value->type != EX_LIT) {
        report(stack->top, ".REPT value must be constant\n");
        free_tree(value);
        return NULL;
    }

    gb = new_buffer();

    levelmod = 0;
    if (!list_md) {
        list_level--;
        levelmod = 1;
    }

    read_body(stack, gb, NULL, FALSE);

    list_level += levelmod;

    rstr = memcheck(malloc(sizeof(REPT_STREAM))); {
        char           *name = memcheck(malloc(strlen(stack->top->name) + 32));

        sprintf(name, "%s:%d->.REPT", stack->top->name, stack->top->line);
        buffer_stream_construct(&rstr->bstr, gb, name);
        free(name);
    }

    rstr->count = value->data.lit;
    rstr->bstr.stream.vtbl = &rept_stream_vtbl;
    rstr->savecond = last_cond;

    buffer_free(gb);
    free_tree(value);

    return &rstr->bstr.stream;
}

/* *** implement IRP_STREAM */

typedef struct irp_stream {
    BUFFER_STREAM   bstr;
    char           *label;      /* The substitution label */
    char           *items;      /* The substitution items (in source code
                                   format) */
    int             offset;     /* Current offset into "items" */
    BUFFER         *body;       /* Original body */
    int             savecond;   /* Saved conditional level */
} IRP_STREAM;

/* irp_stream_gets expands the IRP as the stream is read. */
/* Each time an iteration is exhausted, the next iteration is
   generated. */

char           *irp_stream_gets(
    STREAM *str)
{
    IRP_STREAM     *istr = (IRP_STREAM *) str;
    char           *cp;
    BUFFER         *buf;
    ARG            *arg;

    for (;;) {
        if ((cp = buffer_stream_gets(str)) != NULL)
            return cp;

        cp = istr->items + istr->offset;

        if (!*cp)
            return NULL;               /* No more items.  EOF. */

        arg = new_arg();
        arg->next = NULL;
        arg->locsym = 0;
        arg->label = istr->label;
        arg->value = getstring(cp, &cp);
        cp = skipdelim(cp);
        istr->offset = (int) (cp - istr->items);

        eval_arg(str, arg);
        buf = subst_args(istr->body, arg);

        free(arg->value);
        free(arg);
        buffer_stream_set_buffer(&istr->bstr, buf);
        buffer_free(buf);
    }
}

/* irp_stream_delete - also pops the conditional stack */

void irp_stream_delete(
    STREAM *str)
{
    IRP_STREAM     *istr = (IRP_STREAM *) str;

    pop_cond(istr->savecond);          /* complete unterminated
                                          conditionals */

    buffer_free(istr->body);
    free(istr->items);
    free(istr->label);
    buffer_stream_delete(str);
}

STREAM_VTBL     irp_stream_vtbl = {
    irp_stream_delete, irp_stream_gets, buffer_stream_rewind
};

/* expand_irp is called when a .IRP is encountered in the input. */

STREAM         *expand_irp(
    STACK *stack,
    char *cp)
{
    char           *label,
                   *items;
    BUFFER         *gb;
    int             levelmod = 0;
    IRP_STREAM     *str;

    label = get_symbol(cp, &cp, NULL);
    if (!label) {
        report(stack->top, "Illegal .IRP syntax\n");
        return NULL;
    }

    cp = skipdelim(cp);

    items = getstring(cp, &cp);
    if (!items) {
        report(stack->top, "Illegal .IRP syntax\n");
        free(label);
        return NULL;
    }

    gb = new_buffer();

    levelmod = 0;
    if (!list_md) {
        list_level--;
        levelmod++;
    }

    read_body(stack, gb, NULL, FALSE);

    list_level += levelmod;

    str = memcheck(malloc(sizeof(IRP_STREAM))); {
        char           *name = memcheck(malloc(strlen(stack->top->name) + 32));

        sprintf(name, "%s:%d->.IRP", stack->top->name, stack->top->line);
        buffer_stream_construct(&str->bstr, NULL, name);
        free(name);
    }

    str->bstr.stream.vtbl = &irp_stream_vtbl;

    str->body = gb;
    str->items = items;
    str->offset = 0;
    str->label = label;
    str->savecond = last_cond;

    return &str->bstr.stream;
}


/* *** implement IRPC_STREAM */

typedef struct irpc_stream {
    BUFFER_STREAM   bstr;
    char           *label;      /* The substitution label */
    char           *items;      /* The substitution items (in source code
                                   format) */
    int             offset;     /* Current offset in "items" */
    BUFFER         *body;       /* Original body */
    int             savecond;   /* conditional stack at invocation */
} IRPC_STREAM;

/* irpc_stream_gets - same comments apply as with irp_stream_gets, but
   the substitution is character-by-character */

char           *irpc_stream_gets(
    STREAM *str)
{
    IRPC_STREAM    *istr = (IRPC_STREAM *) str;
    char           *cp;
    BUFFER         *buf;
    ARG            *arg;

    for (;;) {
        if ((cp = buffer_stream_gets(str)) != NULL)
            return cp;

        cp = istr->items + istr->offset;

        if (!*cp)
            return NULL;               /* No more items.  EOF. */

        arg = new_arg();
        arg->next = NULL;
        arg->locsym = 0;
        arg->label = istr->label;
        arg->value = memcheck(malloc(2));
        arg->value[0] = *cp++;
        arg->value[1] = 0;
        istr->offset = (int) (cp - istr->items);

        buf = subst_args(istr->body, arg);

        free(arg->value);
        free(arg);
        buffer_stream_set_buffer(&istr->bstr, buf);
        buffer_free(buf);
    }
}

/* irpc_stream_delete - also pops contidionals */

void irpc_stream_delete(
    STREAM *str)
{
    IRPC_STREAM    *istr = (IRPC_STREAM *) str;

    pop_cond(istr->savecond);          /* complete unterminated
                                          conditionals */
    buffer_free(istr->body);
    free(istr->items);
    free(istr->label);
    buffer_stream_delete(str);
}

STREAM_VTBL     irpc_stream_vtbl = {
    irpc_stream_delete, irpc_stream_gets, buffer_stream_rewind
};

/* expand_irpc - called when .IRPC is encountered in the input */

STREAM         *expand_irpc(
    STACK *stack,
    char *cp)
{
    char           *label,
                   *items;
    BUFFER         *gb;
    int             levelmod = 0;
    IRPC_STREAM    *str;

    label = get_symbol(cp, &cp, NULL);
    if (!label) {
        report(stack->top, "Illegal .IRPC syntax\n");
        return NULL;
    }

    cp = skipdelim(cp);

    items = getstring(cp, &cp);
    if (!items) {
        report(stack->top, "Illegal .IRPC syntax\n");
        free(label);
        return NULL;
    }

    gb = new_buffer();

    levelmod = 0;
    if (!list_md) {
        list_level--;
        levelmod++;
    }

    read_body(stack, gb, NULL, FALSE);

    list_level += levelmod;

    str = memcheck(malloc(sizeof(IRPC_STREAM))); {
        char           *name = memcheck(malloc(strlen(stack->top->name) + 32));

        sprintf(name, "%s:%d->.IRPC", stack->top->name, stack->top->line);
        buffer_stream_construct(&str->bstr, NULL, name);
        free(name);
    }

    str->bstr.stream.vtbl = &irpc_stream_vtbl;
    str->body = gb;
    str->items = items;
    str->offset = 0;
    str->label = label;
    str->savecond = last_cond;

    return &str->bstr.stream;
}
