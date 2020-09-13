
/*
 Smaller operators for assemble
*/

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "util.h"

#include "assemble_aux.h"              /* my own definitions */

#include "assemble_globals.h"
#include "macros.h"
#include "assemble.h"
#include "listing.h"
#include "symbols.h"
#include "parse.h"


/* Allocate a new section */

SECTION        *new_section(
    void)
{
    SECTION        *sect = memcheck(malloc(sizeof(SECTION)));

    sect->flags = 0;
    sect->size = 0;
    sect->pc = 0;
    sect->type = 0;
    sect->sector = 0;
    sect->label = NULL;
    return sect;
}



/* This is called by places that are about to store some code, or
   which want to manually update DOT. */

void change_dot(
    TEXT_RLD *tr,
    int size)
{
    if (size > 0) {
        if (last_dot_section != current_pc->section) {
            text_define_location(tr, current_pc->section->label, &current_pc->value);
            last_dot_section = current_pc->section;
            last_dot_addr = current_pc->value;
        }
        if (last_dot_addr != current_pc->value) {
            text_modify_location(tr, &current_pc->value);
            last_dot_addr = current_pc->value;
        }

        /* Update for next time */
        last_dot_addr += size;
    }

    if (DOT + size > current_pc->section->size)
        current_pc->section->size = DOT + size;
}

/* store_word stores a word to the object file and lists it to the
   listing file */

int store_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "");
    return text_word(tr, &DOT, size, word);
}

/* store_word stores a word to the object file and lists it to the
   listing file */

static int store_displaced_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "'");
    return text_displaced_word(tr, &DOT, size, word);
}

static int store_global_displaced_offset_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word,
    char *global)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "G");
    return text_global_displaced_offset_word(tr, &DOT, size, word, global);
}

static int store_global_offset_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word,
    char *global)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "G");
    return text_global_offset_word(tr, &DOT, size, word, global);
}

static int store_internal_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "");
    return text_internal_word(tr, &DOT, size, word);
}

static int store_psect_displaced_offset_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word,
    char *name)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "");
    return text_psect_displaced_offset_word(tr, &DOT, size, word, name);
}

static int store_psect_offset_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word,
    char *name)
{
    change_dot(tr, size);
    list_word(str, DOT, word, size, "");
    return text_psect_offset_word(tr, &DOT, size, word, name);
}

int store_limits(
    STREAM *str,
    TEXT_RLD *tr)
{
    change_dot(tr, 4);
    list_word(str, DOT, 0, 2, "");
    list_word(str, DOT + 2, 0, 2, "");
    return text_limits(tr, &DOT);
}


/* free_addr_mode frees the storage consumed by an addr_mode */

void free_addr_mode(
    ADDR_MODE *mode)
{
    if (mode->offset)
        free_tree(mode->offset);
    mode->offset = NULL;
}

/* Get the register indicated by the expression */

unsigned get_register(
    EX_TREE *expr)
{
    unsigned        reg;

    if (expr->type == EX_LIT && expr->data.lit <= 7) {
        reg = expr->data.lit;
        return reg;
    }

    if (expr->type == EX_SYM && expr->data.symbol->section->type == SECTION_REGISTER) {
        reg = expr->data.symbol->value;
        return reg;
    }

    return NO_REG;
}


/*
  implicit_gbl is a self-recursive routine that adds undefined symbols
  to the "implicit globals" symbol table.
*/

void implicit_gbl(
    EX_TREE *value)
{
    if (pass)
        return;                        /* Only do this in first pass */

    if (!enabl_gbl)
        return;                        /* Option not enabled, don't do it. */

    switch (value->type) {
    case EX_UNDEFINED_SYM:
        {
            SYMBOL         *sym;

            if (!(value->data.symbol->flags & SYMBOLFLAG_LOCAL)) {      /* Unless it's a
                                                                           local symbol, */
                sym = add_sym(value->data.symbol->label, 0, SYMBOLFLAG_GLOBAL, &absolute_section, &implicit_st);
            }
        }
        break;
    case EX_LIT:
    case EX_SYM:
    case EX_TEMP_SYM: // Impossible on this pass
        return;
    case EX_ADD:
    case EX_SUB:
    case EX_MUL:
    case EX_DIV:
    case EX_AND:
    case EX_OR:
        implicit_gbl(value->data.child.right);
        /* falls into... */
    case EX_COM:
    case EX_NEG:
        implicit_gbl(value->data.child.left);
        break;
    case EX_ERR:
        if (value->data.child.left)
            implicit_gbl(value->data.child.left);
        break;
    }
}

/* Done between the first and second passes */
/* Migrates the symbols from the "implicit" table into the main table. */

void migrate_implicit(
    void)
{
    SYMBOL_ITER     iter;
    SYMBOL         *isym,
                   *sym;

    for (isym = first_sym(&implicit_st, &iter); isym != NULL; isym = next_sym(&implicit_st, &iter)) {
        sym = lookup_sym(isym->label, &symbol_st);
        if (sym)
            continue;                  // It's already in there.  Great.
        sym = add_sym(isym->label, isym->value, isym->flags, isym->section, &symbol_st);
        // Just one other thing - migrate the stmtno
        sym->stmtno = isym->stmtno;
    }
}

int express_sym_offset(
    EX_TREE *value,
    SYMBOL **sym,
    unsigned *offset)
{
    implicit_gbl(value);               /* Translate tree's undefined syms
                                          into global syms */

    /* Internally relocatable symbols will have been summed down into
       EX_TEMP_SYM's. */

    if (value->type == EX_SYM || value->type == EX_TEMP_SYM) {
        *sym = value->data.symbol;
        *offset = 0;
        return 1;
    }

    /* What remains is external symbols. */

    if (value->type == EX_ADD) {
        EX_TREE        *left = value->data.child.left;
        EX_TREE        *right = value->data.child.right;

        if ((left->type != EX_SYM && left->type != EX_UNDEFINED_SYM) || right->type != EX_LIT)
            return 0;                  /* Failed. */
        *sym = left->data.symbol;
        *offset = right->data.lit;
        return 1;
    }

    if (value->type == EX_SUB) {
        EX_TREE        *left = value->data.child.left;
        EX_TREE        *right = value->data.child.right;

        if ((left->type != EX_SYM && left->type != EX_UNDEFINED_SYM) || right->type != EX_LIT)
            return 0;                  /* Failed. */
        *sym = left->data.symbol;
        *offset = (unsigned) -(int) (right->data.lit);
        return 1;
    }

    return 0;
}

/*
  Translate an EX_TREE into a TEXT_COMPLEX suitable for encoding
  into the object file. */

int complex_tree(
    TEXT_COMPLEX *tx,
    EX_TREE *tree)
{
    switch (tree->type) {
    case EX_LIT:
        text_complex_lit(tx, tree->data.lit);
        return 1;

    case EX_TEMP_SYM:
    case EX_SYM:
        {
            SYMBOL         *sym = tree->data.symbol;

            if ((sym->flags & (SYMBOLFLAG_GLOBAL | SYMBOLFLAG_DEFINITION)) == SYMBOLFLAG_GLOBAL) {
                text_complex_global(tx, sym->label);
            } else {
                text_complex_psect(tx, sym->section->sector, sym->value);
            }
        }
        return 1;

    case EX_COM:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        text_complex_com(tx);
        return 1;

    case EX_NEG:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        text_complex_neg(tx);
        return 1;

    case EX_ADD:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_add(tx);
        return 1;

    case EX_SUB:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_sub(tx);
        return 1;

    case EX_MUL:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_mul(tx);
        return 1;

    case EX_DIV:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_div(tx);
        return 1;

    case EX_AND:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_and(tx);
        return 1;

    case EX_OR:
        if (!complex_tree(tx, tree->data.child.left))
            return 0;
        if (!complex_tree(tx, tree->data.child.right))
            return 0;
        text_complex_or(tx);
        return 1;

    default:
        return 0;
    }
}

/* store a word which is represented by a complex expression. */

static void store_complex(
    STREAM *refstr,
    TEXT_RLD *tr,
    int size,
    EX_TREE *value)
{
    TEXT_COMPLEX    tx;

    change_dot(tr, size);              /* About to store - update DOT */

    implicit_gbl(value);               /* Turn undefined symbols into globals */

    text_complex_begin(&tx);           /* Open complex expression */

    if (!complex_tree(&tx, value)) {   /* Translate */
        report(refstr, "Invalid expression\n");
        store_word(refstr, tr, size, 0);
    } else {
        list_word(refstr, DOT, 0, size, "C");
        text_complex_commit(tr, &DOT, size, &tx, 0);
    }
}

/* store_complex_displaced is the same as store_complex but uses the
   "displaced" RLD code */

static void store_complex_displaced(
    STREAM *refstr,
    TEXT_RLD *tr,
    int size,
    EX_TREE *value)
{
    TEXT_COMPLEX    tx;

    change_dot(tr, size);

    implicit_gbl(value);               /* Turn undefined symbols into globals */

    text_complex_begin(&tx);

    if (!complex_tree(&tx, value)) {
        report(refstr, "Invalid expression\n");
        store_word(refstr, tr, size, 0);
    } else {
        list_word(refstr, DOT, 0, size, "C");
        text_complex_commit_displaced(tr, &DOT, size, &tx, 0);
    }
}

/*
  mode_extension - writes the extension word required by an addressing
  mode */

void mode_extension(
    TEXT_RLD *tr,
    ADDR_MODE *mode,
    STREAM *str)
{
    EX_TREE        *value = mode->offset;
    SYMBOL         *sym;
    unsigned        offset;

    /* Also frees the mode. */

    if (value == NULL) {
        free_addr_mode(mode);
        return;
    }

    if (value->type == EX_LIT) {
        if (mode->rel)                 /* PC-relative? */
            store_displaced_word(str, tr, 2, value->data.lit);
        else
            store_word(str, tr, 2, value->data.lit);    /* Just a
                                                           known
                                                           value. */
    } else if (express_sym_offset(value, &sym, &offset)) {
        if ((sym->flags & (SYMBOLFLAG_GLOBAL | SYMBOLFLAG_DEFINITION)) == SYMBOLFLAG_GLOBAL) {
            /* Reference to a global symbol. */
            /* Global symbol plus offset */
            if (mode->rel)
                store_global_displaced_offset_word(str, tr, 2, offset, sym->label);
            else
                store_global_offset_word(str, tr, 2, offset, sym->label);
        } else {
            /* Relative to non-external symbol. */
            if (current_pc->section == sym->section) {
                /* In the same section */
                if (mode->rel) {
                    /* I can compute this myself. */
                    store_word(str, tr, 2, sym->value + offset - DOT - 2);
                } else
                    store_internal_word(str, tr, 2, sym->value + offset);
            } else {
                /* In a different section */
                if (mode->rel)
                    store_psect_displaced_offset_word(str, tr, 2, sym->value + offset, sym->section->label);
                else
                    store_psect_offset_word(str, tr, 2, sym->value + offset, sym->section->label);
            }
        }
    } else {
        /* Complex relocation */

        if (mode->rel)
            store_complex_displaced(str, tr, 2, mode->offset);
        else
            store_complex(str, tr, 2, mode->offset);
    }

    free_addr_mode(mode);
}

/* eval_defined - take an EX_TREE and returns TRUE if the tree
   represents "defined" symbols. */

int eval_defined(
    EX_TREE *value)
{
    switch (value->type) {
    case EX_LIT:
        return 1;
    case EX_SYM:
        return 1;
    case EX_UNDEFINED_SYM:
        return 0;
    case EX_AND:
        return eval_defined(value->data.child.left) && eval_defined(value->data.child.right);
    case EX_OR:
        return eval_defined(value->data.child.left) || eval_defined(value->data.child.right);
    default:
        return 0;
    }
}

/* eval_undefined - take an EX_TREE and returns TRUE if it represents
   "undefined" symbols. */

int eval_undefined(
    EX_TREE *value)
{
    switch (value->type) {
    case EX_UNDEFINED_SYM:
        return 1;
    case EX_SYM:
        return 0;
    case EX_AND:
        return eval_undefined(value->data.child.left) && eval_undefined(value->data.child.right);
    case EX_OR:
        return eval_undefined(value->data.child.left) || eval_undefined(value->data.child.right);
    default:
        return 0;
    }
}

/* push_cond - a new conditional (.IF) block has been activated.  Push
   it's context. */

void push_cond(
    int ok,
    STREAM *str)
{
    last_cond++;
    assert(last_cond < MAX_CONDS);
    conds[last_cond].ok = ok;
    conds[last_cond].file = memcheck(strdup(str->name));
    conds[last_cond].line = str->line;
}

/*
  pop_cond - pop stacked conditionals. */

void pop_cond(
    int to)
{
    while (last_cond > to) {
        free(conds[last_cond].file);
        last_cond--;
    }
}


/* go_section - sets current_pc to a new program section */

void go_section(
    TEXT_RLD *tr,
    SECTION *sect)
{
    if (current_pc->section == sect)
        return;                        /* This is too easy */

    /* save current PC value for old section */
    current_pc->section->pc = DOT;

    /* Set current section and PC value */
    current_pc->section = sect;
    DOT = sect->pc;
}

/*
  store_value - used to store a value represented by an expression
  tree into the object file.  Used by do_word and .ASCII/.ASCIZ.
*/

void store_value(
    STACK *stack,
    TEXT_RLD *tr,
    int size,
    EX_TREE *value)
{
    SYMBOL         *sym;
    unsigned        offset;

    implicit_gbl(value);               /* turn undefined symbols into globals */

    if (value->type == EX_LIT) {
        store_word(stack->top, tr, size, value->data.lit);
    } else if (!express_sym_offset(value, &sym, &offset)) {
        store_complex(stack->top, tr, size, value);
    } else {
        if ((sym->flags & (SYMBOLFLAG_GLOBAL | SYMBOLFLAG_DEFINITION)) == SYMBOLFLAG_GLOBAL) {
            store_global_offset_word(stack->top, tr, size, sym->value + offset, sym->label);
        } else if (sym->section != current_pc->section) {
            store_psect_offset_word(stack->top, tr, size, sym->value + offset, sym->section->label);
        } else {
            store_internal_word(stack->top, tr, size, sym->value + offset);
        }
    }
}

/* do_word - used by .WORD, .BYTE, and implied .WORD. */

int do_word(
    STACK *stack,
    TEXT_RLD *tr,
    char *cp,
    int size)
{
    if (size == 2 && (DOT & 1)) {
        report(stack->top, ".WORD on odd boundary\n");
        store_word(stack->top, tr, 1, 0);       /* Align it */
    }

    do {
        EX_TREE        *value = parse_expr(cp, 0);

        store_value(stack, tr, size, value);

        cp = skipdelim(value->cp);

        free_tree(value);
    } while (cp = skipdelim(cp), !EOL(*cp));

    return 1;
}

/*
  check_branch - check branch distance.
*/

int check_branch(
    STACK *stack,
    unsigned offset,
    int min,
    int max)
{
    int             s_offset;

    /* Sign-extend */
    if (offset & 0100000)
        s_offset = offset | ~0177777;
    else
        s_offset = offset & 077777;
    if (s_offset > max || s_offset < min) {
        char            temp[16];

        /* printf can't do signed octal. */
        my_ltoa(s_offset, temp, 8);
        report(stack->top, "Branch target out of range (distance=%s)\n", temp);
        return 0;
    }
    return 1;
}


/* write_globals writes out the GSD prior to the second assembly pass */

void write_globals(
    FILE *obj)
{
    GSD             gsd;
    SYMBOL         *sym;
    SECTION        *psect;
    SYMBOL_ITER     sym_iter;
    int             isect;

    if (obj == NULL)
        return;                        /* Nothing to do if no OBJ file. */

    gsd_init(&gsd, obj);

    gsd_mod(&gsd, module_name);

    if (ident)
        gsd_ident(&gsd, ident);

    /* write out each PSECT with it's global stuff */
    /* Sections must be written out in the order that they
       appear in the assembly file.  */
    for (isect = 0; isect < sector; isect++) {
        psect = sections[isect];

        gsd_psect(&gsd, psect->label, psect->flags, psect->size);
        psect->sector = isect;         /* Assign it a sector */
        psect->pc = 0;                 /* Reset it's PC for second pass */

        sym = first_sym(&symbol_st, &sym_iter);
        while (sym) {
            if ((sym->flags & SYMBOLFLAG_GLOBAL) && sym->section == psect) {
                gsd_global(&gsd, sym->label,
                           (sym->
                            flags & SYMBOLFLAG_DEFINITION ? GLOBAL_DEF : 0) | ((sym->
                                                                                flags & SYMBOLFLAG_WEAK) ?
                                                                               GLOBAL_WEAK : 0)
                           | ((sym->section->flags & PSECT_REL) ? GLOBAL_REL : 0) | 0100,
                           /* Looks undefined, but add it in anyway */
                           sym->value);
            }
            sym = next_sym(&symbol_st, &sym_iter);
        }
    }

    /* Now write out the transfer address */
    if (xfer_address->type == EX_LIT) {
        gsd_xfer(&gsd, ". ABS.", xfer_address->data.lit);
    } else {
        SYMBOL         *sym;
        unsigned        offset;

        if (!express_sym_offset(xfer_address, &sym, &offset)) {
            report(NULL, "Illegal program transfer address\n");
        } else {
            gsd_xfer(&gsd, sym->section->label, sym->value + offset);
        }
    }

    gsd_flush(&gsd);

    gsd_end(&gsd);
}
