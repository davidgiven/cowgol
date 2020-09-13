#define ASSEMBLE__C


#include <stdlib.h>
#include <string.h>

#include "assemble.h"                  /* my own definitions */

#include "assemble_globals.h"
#include "assemble_aux.h"

#include "util.h"

#include "mlb.h"
#include "object.h"
#include "listing.h"
#include "parse.h"
#include "symbols.h"
#include "extree.h"
#include "macros.h"
#include "rept_irpc.h"

#include "rad50.h"




/* assemble - read a line from the input stack, assemble it. */

/* This function is way way too large, because I just coded most of
   the operation code and pseudo-op handling right in line.  */

static int assemble(
    STACK *stack,
    TEXT_RLD *tr)
{
    char           *cp;         /* Parse character pointer */
    char           *opcp;       /* Points to operation mnemonic text */
    char           *ncp;        /* "next" cp */
    char           *label;      /* A label */
    char           *line;       /* The whole line */
    SYMBOL         *op;         /* The operation SYMBOL */
    int             local;      /* Whether a label is a local label or
                                   not */

    line = stack_gets(stack);
    if (line == NULL)
        return -1;                     /* Return code for EOF. */

    cp = line;

    /* Frankly, I don't need to keep "line."  But I found it quite
       handy during debugging, to see what the whole operation was,
       when I'm down to parsing the second operand and things aren't
       going right. */

    stmtno++;                          /* Increment statement number */

    list_source(stack->top, line);     /* List source */

    if (suppressed) {
        /* Assembly is suppressed by unsatisfied conditional.  Look
           for ending and enabling statements. */

        op = get_op(cp, &cp);          /* Look at operation code */

        /* FIXME: this code will blindly look into .REM commentary and
           find operation codes.  Incidentally, so will read_body. */

        if (op == NULL)
            return 1;                  /* Not found.  Don't care. */
        if (op->section->type != SECTION_PSEUDO)
            return 1;                  /* Not a pseudo-op. */
        switch (op->value) {
        case P_IF:
        case P_IFDF:
            suppressed++;              /* Nested.  Suppressed. */
            break;
        case P_IFTF:
            if (suppressed == 1)       /* Reduce suppression from 1 to 0. */
                suppressed = 0;
            break;
        case P_IFF:
            if (suppressed == 1) {     /* Can reduce suppression from 1 to 0. */
                if (!conds[last_cond].ok)
                    suppressed = 0;
            }
            break;
        case P_IFT:
            if (suppressed == 1) {     /* Can reduce suppression from 1 to 0. */
                if (conds[last_cond].ok)
                    suppressed = 0;
            }
            break;
        case P_ENDC:
            suppressed--;              /* Un-nested. */
            if (suppressed == 0)
                pop_cond(last_cond - 1);        /* Re-enabled. */
            break;
        }
        return 1;
    }

    /* The line may begin with "label<ws>:[:]" */

    opcp = cp;
    if ((label = get_symbol(cp, &ncp, &local)) != NULL) {
        int             flag = SYMBOLFLAG_PERMANENT | SYMBOLFLAG_DEFINITION | local;
        SYMBOL         *sym;

        ncp = skipwhite(ncp);
        if (*ncp == ':') {             /* Colon, for symbol definition? */
            ncp++;
            /* maybe it's a global definition */
            if (*ncp == ':') {
                flag |= SYMBOLFLAG_GLOBAL;      /* Yes, include global flag */
                ncp++;
            }

            sym = add_sym(label, DOT, flag, current_pc->section, &symbol_st);
            cp = ncp;

            if (sym == NULL)
                report(stack->top, "Illegal symbol definition %s\n", label);

            free(label);

            /* See if local symbol block should be incremented */
            if (!enabl_lsb && !local)
                lsb++;

            cp = skipwhite(ncp);
            opcp = cp;
            label = get_symbol(cp, &ncp, NULL); /* Now, get what follows */
        }
    }

    /* PSEUDO P_IIF jumps here.  */
  reassemble:
    cp = skipwhite(cp);

    if (EOL(*cp))
        return 1;                      /* It's commentary.  All done. */

    if (label) {                       /* Something looks like a label. */
        /* detect assignment */

        ncp = skipwhite(ncp);          /* The pointer to the text that
                                          follows the symbol */

        if (*ncp == '=') {
            unsigned        flags;
            EX_TREE        *value;
            SYMBOL         *sym;

            cp = ncp;

            /* Symbol assignment. */

            flags = SYMBOLFLAG_DEFINITION | local;
            cp++;
            if (*cp == '=') {
                flags |= SYMBOLFLAG_GLOBAL;     /* Global definition */
                cp++;
            }
            if (*cp == ':') {
                flags |= SYMBOLFLAG_PERMANENT;
                cp++;
            }

            cp = skipwhite(cp);

            value = parse_expr(cp, 0);

            /* Special code: if the symbol is the program counter,
               this is harder. */

            if (strcmp(label, ".") == 0) {
                if (current_pc->section->flags & PSECT_REL) {
                    SYMBOL         *sym;
                    unsigned        offset;

                    /* Express the given expression as a symbol and an
                       offset. The symbol must not be global, the
                       section must = current. */

                    if (!express_sym_offset(value, &sym, &offset)) {
                        report(stack->top, "Illegal ORG\n");
                    } else if ((sym->flags & (SYMBOLFLAG_GLOBAL | SYMBOLFLAG_DEFINITION)) == SYMBOLFLAG_GLOBAL) {
                        report(stack->top, "Can't ORG to external location\n");
                    } else if (sym->flags & SYMBOLFLAG_UNDEFINED) {
                        report(stack->top, "Can't ORG to undefined sym\n");
                    } else if (sym->section != current_pc->section) {
                        report(stack->top, "Can't ORG to alternate section " "(use PSECT)\n");
                    } else {
                        DOT = sym->value + offset;
                        list_value(stack->top, DOT);
                        change_dot(tr, 0);
                    }
                } else {
                    /* If the current section is absolute, the value
                       must be a literal */
                    if (value->type != EX_LIT) {
                        report(stack->top, "Can't ORG to non-absolute location\n");
                        free_tree(value);
                        free(label);
                        return 0;
                    }
                    DOT = value->data.lit;
                    list_value(stack->top, DOT);
                    change_dot(tr, 0);
                }
                free_tree(value);
                free(label);
                return 1;
            }

            /* regular symbols */
            if (value->type == EX_LIT) {
                sym = add_sym(label, value->data.lit, flags, &absolute_section, &symbol_st);
            } else if (value->type == EX_SYM || value->type == EX_TEMP_SYM) {
                sym = add_sym(label, value->data.symbol->value, flags, value->data.symbol->section, &symbol_st);
            } else {
                report(stack->top, "Complex expression cannot be assigned " "to a symbol\n");

                if (!pass) {
                    /* This may work better in pass 2 - something in
                       RT-11 monitor needs the symbol to apear to be
                       defined even if I can't resolve its value. */
                    sym = add_sym(label, 0, SYMBOLFLAG_UNDEFINED, &absolute_section, &symbol_st);
                } else
                    sym = NULL;
            }

            if (sym != NULL)
                list_value(stack->top, sym->value);

            free_tree(value);
            free(label);

            return sym != NULL;
        }

        /* Try to resolve macro */

        op = lookup_sym(label, &macro_st);
        if (op && op->stmtno < stmtno) {
            STREAM         *macstr;

            free(label);

            macstr = expandmacro(stack->top, (MACRO *) op, ncp);

            stack_push(stack, macstr); /* Push macro expansion
                                          onto input stream */

            return 1;
        }

        /* Try to resolve instruction or pseudo */
        op = lookup_sym(label, &system_st);
        if (op) {
            cp = ncp;

            free(label);               /* Don't need this hanging around anymore */

            switch (op->section->type) {
            case SECTION_PSEUDO:
                switch (op->value) {
                case P_ENDR:
                case P_ENDM:
                case P_SBTTL:
                case P_LIST:
                case P_NLIST:
                case P_PRINT:
                    return 1;          /* Accepted, ignored.  (An obvious
                                          need: get assembly listing
                                          controls working. ) */

                case P_IDENT:
                    {
                        char            endc[6];
                        int             len;

                        cp = skipwhite(cp);
                        endc[0] = *cp++;
                        endc[1] = '\n';
                        endc[2] = 0;
                        len = (int) strcspn(cp, endc);
                        if (len > 6)
                            len = 6;

                        if (ident)     /* An existing ident? */
                            free(ident);        /* Discard it. */

                        ident = memcheck(malloc(len + 1));
                        memcpy(ident, cp, len);
                        ident[len] = 0;
                        upcase(ident);

                        return 1;
                    }

                case P_RADIX:
                    {
                        int             old_radix = radix;

                        radix = strtoul(cp, &cp, 10);
                        if (radix != 8 && radix != 10 && radix != 16 && radix != 2) {
                            radix = old_radix;
                            report(stack->top, "Illegal radix\n");
                            return 0;
                        }
                        return 1;
                    }

                case P_FLT4:
                case P_FLT2:
                    {
                        int             ok = 1;

                        while (!EOL(*cp)) {
                            unsigned        flt[4];

                            if (parse_float(cp, &cp, (op->value == P_FLT4 ? 4 : 2), flt)) {
                                /* Store the word values */
                                store_word(stack->top, tr, 2, flt[0]);
                                store_word(stack->top, tr, 2, flt[1]);
                                if (op->value == P_FLT4) {
                                    store_word(stack->top, tr, 2, flt[2]);
                                    store_word(stack->top, tr, 2, flt[3]);
                                }
                            } else {
                                report(stack->top, "Bad floating point format\n");
                                ok = 0;
                            }
                            cp = skipdelim(cp);
                        }
                        return ok;
                    }

                case P_ERROR:
                    report(stack->top, "%.*s\n", strcspn(cp, "\n"), cp);
                    return 0;

                case P_SAVE:
                    sect_sp++;
                    sect_stack[sect_sp] = current_pc->section;
                    return 1;

                case P_RESTORE:
                    if (sect_sp < 0) {
                        report(stack->top, "No saved section for .RESTORE\n");
                        return 0;
                    } else {
                        go_section(tr, sect_stack[sect_sp]);
                        sect_sp++;
                    }
                    return 1;

                case P_NARG:
                    {
                        STREAM         *str;
                        MACRO_STREAM   *mstr;
                        int             local;

                        label = get_symbol(cp, &cp, &local);

                        if (label == NULL) {
                            report(stack->top, "Bad .NARG syntax\n");
                            return 0;
                        }

                        /* Walk up the stream stack to find the
                           topmost macro stream */
                        for (str = stack->top; str != NULL && str->vtbl != &macro_stream_vtbl;
                             str = str->next) ;

                        if (!str) {
                            report(str, ".NARG not within macro expansion\n");
                            free(label);
                            return 0;
                        }

                        mstr = (MACRO_STREAM *) str;

                        add_sym(label, mstr->nargs, SYMBOLFLAG_DEFINITION | local, &absolute_section,
                                &symbol_st);
                        free(label);
                        return 1;
                    }

                case P_NCHR:
                    {
                        char           *string;
                        int             local;

                        label = get_symbol(cp, &cp, &local);

                        if (label == NULL) {
                            report(stack->top, "Bad .NCHR syntax\n");
                            return 0;
                        }

                        cp = skipdelim(cp);

                        string = getstring(cp, &cp);

                        add_sym(label, strlen(string), SYMBOLFLAG_DEFINITION | local, &absolute_section,
                                &symbol_st);
                        free(label);
                        free(string);
                        return 1;
                    }

                case P_NTYPE:
                    {
                        ADDR_MODE       mode;
                        int             local;

                        label = get_symbol(cp, &cp, &local);
                        if (label == NULL) {
                            report(stack->top, "Bad .NTYPE syntax\n");
                            return 0;
                        }

                        cp = skipdelim(cp);

                        if (!get_mode(cp, &cp, &mode)) {
                            report(stack->top, "Bad .NTYPE addressing mode\n");
                            free(label);
                            return 0;
                        }

                        add_sym(label, mode.type, SYMBOLFLAG_DEFINITION | local, &absolute_section, &symbol_st);
                        free_addr_mode(&mode);
                        free(label);

                        return 1;
                    }

                case P_INCLUDE:
                    {
                        char           *name = getstring(cp, &cp);
                        STREAM         *incl;

                        if (name == NULL) {
                            report(stack->top, "Bad .INCLUDE file name\n");
                            return 0;
                        }

                        incl = new_file_stream(name);
                        if (incl == NULL) {
                            report(stack->top, "Unable to open .INCLUDE file %s\n", name);
                            free(name);
                            return 0;
                        }

                        free(name);

                        stack_push(stack, incl);

                        return 1;
                    }

                case P_REM:
                    {
                        char            quote[4];

                        /* Read and discard lines until one with a
                           closing quote */

                        cp = skipwhite(cp);
                        quote[0] = *cp++;
                        quote[1] = '\n';
                        quote[2] = 0;

                        for (;;) {
                            cp += strcspn(cp, quote);
                            if (*cp == quote[0])
                                break; /* Found closing quote */
                            cp = stack_gets(stack);     /* Read next input line */
                            if (cp == NULL)
                                break; /* EOF */
                        }
                    }
                    return 1;

                case P_IRP:
                    {
                        STREAM         *str = expand_irp(stack, cp);

                        if (str)
                            stack_push(stack, str);
                        return str != NULL;
                    }

                case P_IRPC:
                    {
                        STREAM         *str = expand_irpc(stack, cp);

                        if (str)
                            stack_push(stack, str);
                        return str != NULL;
                    }

                case P_MCALL:
                    {
                        STREAM         *macstr;
                        BUFFER         *macbuf;
                        char           *maccp;
                        int             saveline;
                        MACRO          *mac;
                        int             i;
                        char            macfile[FILENAME_MAX];
                        char            hitfile[FILENAME_MAX];

                        for (;;) {
                            cp = skipdelim(cp);

                            if (EOL(*cp))
                                return 1;

                            label = get_symbol(cp, &cp, NULL);
                            if (!label) {
                                report(stack->top, "Illegal .MCALL format\n");
                                return 0;
                            }

                            /* See if that macro's already defined */
                            if (lookup_sym(label, &macro_st)) {
                                free(label);    /* Macro already
                                                   registered.  No
                                                   prob. */
                                cp = skipdelim(cp);
                                continue;
                            }

                            /* Find the macro in the list of included
                               macro libraries */
                            macbuf = NULL;
                            for (i = 0; i < nr_mlbs; i++)
                                if ((macbuf = mlb_entry(mlbs[i], label)) != NULL)
                                    break;
                            if (macbuf != NULL) {
                                macstr = new_buffer_stream(macbuf, label);
                                buffer_free(macbuf);
                            } else {
                                strncpy(macfile, label, sizeof(macfile));
                                strncat(macfile, ".MAC", sizeof(macfile) - strlen(macfile) - 1);
                                my_searchenv(macfile, "MCALL", hitfile, sizeof(hitfile));
                                if (hitfile[0])
                                    macstr = new_file_stream(hitfile);
                                else
                                    macstr = NULL;
                            }

                            if (macstr != NULL) {
                                for (;;) {
                                    char           *mlabel;

                                    maccp = macstr->vtbl->gets(macstr);
                                    if (maccp == NULL)
                                        break;
                                    mlabel = get_symbol(maccp, &maccp, NULL);
                                    if (mlabel == NULL)
                                        continue;
                                    op = lookup_sym(mlabel, &system_st);
                                    free(mlabel);
                                    if (op == NULL)
                                        continue;
                                    if (op->value == P_MACRO)
                                        break;
                                }

                                if (maccp != NULL) {
                                    STACK           macstack = {
                                        macstr
                                    };
                                    int             savelist = list_level;

                                    saveline = stmtno;
                                    list_level = -1;
                                    mac = defmacro(maccp, &macstack, TRUE);
                                    if (mac == NULL) {
                                        report(stack->top, "Failed to define macro " "called %s\n", label);
                                    }

                                    stmtno = saveline;
                                    list_level = savelist;
                                }

                                macstr->vtbl->delete(macstr);
                            } else
                                report(stack->top, "MACRO %s not found\n", label);

                            free(label);
                        }
                    }
                    return 1;

                case P_MACRO:
                    {
                        MACRO          *mac = defmacro(cp, stack, FALSE);

                        return mac != NULL;
                    }

                case P_MEXIT:
                    {
                        STREAM         *macstr;

                        /* Pop a stream from the input. */
                        /* It must be the first stream, and it must be */
                        /* a macro, rept, irp, or irpc. */
                        macstr = stack->top;
                        if (macstr->vtbl != &macro_stream_vtbl && macstr->vtbl != &rept_stream_vtbl
                            && macstr->vtbl != &irp_stream_vtbl && macstr->vtbl != &irpc_stream_vtbl) {
                            report(stack->top, ".MEXIT not within a macro\n");
                            return 0;
                        }

                        /* and finally, pop the macro */
                        stack_pop(stack);

                        return 1;
                    }

                case P_REPT:
                    {
                        STREAM         *reptstr = expand_rept(stack, cp);

                        if (reptstr)
                            stack_push(stack, reptstr);
                        return reptstr != NULL;
                    }

                case P_ENABL:
                    /* FIXME - add all the rest of the options. */
                    while (!EOL(*cp)) {
                        label = get_symbol(cp, &cp, NULL);
                        if (strcmp(label, "AMA") == 0)
                            enabl_ama = 1;
                        else if (strcmp(label, "LSB") == 0) {
                            enabl_lsb = 1;
                            lsb++;
                        } else if (strcmp(label, "GBL") == 0)
                            enabl_gbl = 1;
                        free(label);
                        cp = skipdelim(cp);
                    }
                    return 1;

                case P_DSABL:
                    /* FIXME Ditto as for .ENABL */
                    while (!EOL(*cp)) {
                        label = get_symbol(cp, &cp, NULL);
                        if (strcmp(label, "AMA") == 0)
                            enabl_ama = 0;
                        else if (strcmp(label, "LSB") == 0)
                            enabl_lsb = 0;
                        else if (strcmp(label, "GBL") == 0)
                            enabl_gbl = 0;
                        free(label);
                        cp = skipdelim(cp);
                    }
                    return 1;

                case P_LIMIT:
                    store_limits(stack->top, tr);
                    return 1;

                case P_TITLE:
                    /* accquire module name */
                    if (module_name != NULL) {
                        free(module_name);
                    }
                    module_name = get_symbol(cp, &cp, NULL);
                    return 1;

                case P_END:
                    /* Accquire transfer address */
                    cp = skipwhite(cp);
                    if (!EOL(*cp)) {
                        if (xfer_address)
                            free_tree(xfer_address);
                        xfer_address = parse_expr(cp, 0);
                    }
                    return 1;

                case P_IFDF:
                    opcp = skipwhite(opcp);
                    cp = opcp + 3;     /* Point cp at the "DF" or
                                          "NDF" part */
                    /* Falls into... */
                case P_IIF:
                case P_IF:
                    {
                        EX_TREE        *value;
                        int             ok;

                        label = get_symbol(cp, &cp, NULL);      /* Get condition */
                        cp = skipdelim(cp);

                        if (strcmp(label, "DF") == 0) {
                            value = parse_expr(cp, 1);
                            cp = value->cp;
                            ok = eval_defined(value);
                            free_tree(value);
                        } else if (strcmp(label, "NDF") == 0) {
                            value = parse_expr(cp, 1);
                            cp = value->cp;
                            ok = eval_undefined(value);
                            free_tree(value);
                        } else if (strcmp(label, "B") == 0) {
                            char           *thing;

                            cp = skipwhite(cp);
                            if (!EOL(*cp))
                                thing = getstring(cp, &cp);
                            else
                                thing = memcheck(strdup(""));
                            ok = (*thing == 0);
                            free(thing);
                        } else if (strcmp(label, "NB") == 0) {
                            char           *thing;

                            cp = skipwhite(cp);
                            if (!EOL(*cp))
                                thing = getstring(cp, &cp);
                            else
                                thing = memcheck(strdup(""));
                            ok = (*thing != 0);
                            free(thing);
                        } else if (strcmp(label, "IDN") == 0) {
                            char           *thing1,
                                           *thing2;

                            thing1 = getstring(cp, &cp);
                            cp = skipdelim(cp);
                            if (!EOL(*cp))
                                thing2 = getstring(cp, &cp);
                            else
                                thing2 = memcheck(strdup(""));
                            ok = (strcmp(thing1, thing2) == 0);
                            free(thing1);
                            free(thing2);
                        } else if (strcmp(label, "DIF") == 0) {
                            char           *thing1,
                                           *thing2;

                            thing1 = getstring(cp, &cp);
                            cp = skipdelim(cp);
                            if (!EOL(*cp))
                                thing2 = getstring(cp, &cp);
                            else
                                thing2 = memcheck(strdup(""));
                            ok = (strcmp(thing1, thing2) != 0);
                            free(thing1);
                            free(thing2);
                        } else {
                            int             sword;
                            unsigned        uword;
                            EX_TREE        *value = parse_expr(cp, 0);

                            cp = value->cp;

                            if (value->type != EX_LIT) {
                                report(stack->top, "Bad .IF expression\n");
                                list_value(stack->top, 0);
                                free_tree(value);
                                ok = FALSE;     /* Pick something. */
                            } else {
                                unsigned        word;

                                /* Convert to signed and unsigned words */
                                sword = value->data.lit & 0x7fff;

                                /* FIXME I don't know if the following
                                   is portable enough.  */
                                if (value->data.lit & 0x8000)
                                    sword |= ~0xFFFF;   /* Render negative */

                                /* Reduce unsigned value to 16 bits */
                                uword = value->data.lit & 0xffff;

                                if (strcmp(label, "EQ") == 0 || strcmp(label, "Z") == 0)
                                    ok = (uword == 0), word = uword;
                                else if (strcmp(label, "NE") == 0 || strcmp(label, "NZ") == 0)
                                    ok = (uword != 0), word = uword;
                                else if (strcmp(label, "GT") == 0 || strcmp(label, "G") == 0)
                                    ok = (sword > 0), word = sword;
                                else if (strcmp(label, "GE") == 0)
                                    ok = (sword >= 0), word = sword;
                                else if (strcmp(label, "LT") == 0 || strcmp(label, "L") == 0)
                                    ok = (sword < 0), word = sword;
                                else if (strcmp(label, "LE") == 0)
                                    ok = (sword <= 0), word = sword;

                                list_value(stack->top, word);

                                free_tree(value);
                            }
                        }

                        free(label);

                        if (op->value == P_IIF) {
                            stmtno++;  /* the second half is a
                                          separate statement */
                            if (ok) {
                                /* The "immediate if" */
                                /* Only slightly tricky. */
                                cp = skipdelim(cp);
                                label = get_symbol(cp, &ncp, &local);
                                goto reassemble;
                            }
                            return 1;
                        }

                        push_cond(ok, stack->top);

                        if (!ok)
                            suppressed++;       /* Assembly
                                                   suppressed
                                                   until .ENDC */
                    }
                    return 1;

                case P_IFF:
                    if (last_cond < 0) {
                        report(stack->top, "No conditional block active\n");
                        return 0;
                    }
                    if (conds[last_cond].ok)    /* Suppress if last cond
                                                   is true */
                        suppressed++;
                    return 1;

                case P_IFT:
                    if (last_cond < 0) {
                        report(stack->top, "No conditional block active\n");
                        return 0;
                    }
                    if (!conds[last_cond].ok)   /* Suppress if last cond
                                                   is false */
                        suppressed++;
                    return 1;

                case P_IFTF:
                    if (last_cond < 0) {
                        report(stack->top, "No conditional block active\n");
                        return 0;
                    }
                    return 1;          /* Don't suppress. */

                case P_ENDC:
                    if (last_cond < 0) {
                        report(stack->top, "No conditional block active\n");
                        return 0;
                    }

                    pop_cond(last_cond - 1);
                    return 1;

                case P_EVEN:
                    if (DOT & 1) {
                        list_word(stack->top, DOT, 0, 1, "");
                        DOT++;
                    }
                    return 1;

                case P_ODD:
                    if (!(DOT & 1)) {
                        list_word(stack->top, DOT, 0, 1, "");
                        DOT++;
                    }
                    return 1;

                case P_ASECT:
                    go_section(tr, &absolute_section);
                    return 1;

                case P_CSECT:
                case P_PSECT:
                    {
                        SYMBOL         *sectsym;
                        SECTION        *sect;

                        label = get_symbol(cp, &cp, NULL);
                        if (label == NULL)
                            label = memcheck(strdup(""));       /* Allow blank */

                        sectsym = lookup_sym(label, &section_st);
                        if (sectsym) {
                            sect = sectsym->section;
                            free(label);
                        } else {
                            sect = new_section();
                            sect->label = label;
                            sect->flags = 0;
                            sect->pc = 0;
                            sect->size = 0;
                            sect->type = SECTION_USER;
                            sections[sector++] = sect;
                            sectsym = add_sym(label, 0, 0, sect, &section_st);
                        }

                        if (op->value == P_PSECT)
                            sect->flags |= PSECT_REL;
                        else if (op->value == P_CSECT)
                            sect->flags |= PSECT_REL | PSECT_COM | PSECT_GBL;

                        while (cp = skipdelim(cp), !EOL(*cp)) {
                            /* Parse section options */
                            label = get_symbol(cp, &cp, NULL);
                            if (strcmp(label, "ABS") == 0) {
                                sect->flags &= ~PSECT_REL;      /* Not relative */
                                sect->flags |= PSECT_COM;       /* implies common */
                            } else if (strcmp(label, "REL") == 0) {
                                sect->flags |= PSECT_REL;       /* Is relative */
                            } else if (strcmp(label, "SAV") == 0) {
                                sect->flags |= PSECT_SAV;       /* Is root */
                            } else if (strcmp(label, "OVR") == 0) {
                                sect->flags |= PSECT_COM;       /* Is common */
                            } else if (strcmp(label, "RW") == 0) {
                                sect->flags &= ~PSECT_RO;       /* Not read-only */
                            } else if (strcmp(label, "RO") == 0) {
                                sect->flags |= PSECT_RO;        /* Is read-only */
                            } else if (strcmp(label, "I") == 0) {
                                sect->flags &= ~PSECT_DATA;     /* Not data */
                            } else if (strcmp(label, "D") == 0) {
                                sect->flags |= PSECT_DATA;      /* data */
                            } else if (strcmp(label, "GBL") == 0) {
                                sect->flags |= PSECT_GBL;       /* Global */
                            } else if (strcmp(label, "LCL") == 0) {
                                sect->flags &= ~PSECT_GBL;      /* Local */
                            } else {
                                report(stack->top, "Unknown flag %s given to " ".PSECT directive\n", label);
                                free(label);
                                return 0;
                            }

                            free(label);
                        }

                        go_section(tr, sect);

                        return 1;
                    }                  /* end PSECT code */
                    break;

                case P_WEAK:
                case P_GLOBL:
                    {
                        SYMBOL         *sym;

                        while (!EOL(*cp)) {
                            /* Loop and make definitions for
                               comma-separated symbols */
                            label = get_symbol(cp, &ncp, NULL);
                            if (label == NULL) {
                                report(stack->top, "Illegal .GLOBL/.WEAK " "syntax\n");
                                return 0;
                            }

                            sym = lookup_sym(label, &symbol_st);
                            if (sym) {
                                sym->flags |= SYMBOLFLAG_GLOBAL | (op->value == P_WEAK ? SYMBOLFLAG_WEAK : 0);
                            } else
                                sym = add_sym(label, 0,
                                              SYMBOLFLAG_GLOBAL | (op->value == P_WEAK ? SYMBOLFLAG_WEAK : 0),
                                              &absolute_section, &symbol_st);

                            free(label);
                            cp = skipdelim(ncp);
                        }
                    }
                    return 1;

                case P_WORD:
                    {
                        /* .WORD might be followed by nothing, which
                           is an implicit .WORD 0 */
                        if (EOL(*cp)) {
                            if (DOT & 1) {
                                report(stack->top, ".WORD on odd " "boundary\n");
                                DOT++; /* Fix it, too */
                            }
                            store_word(stack->top, tr, 2, 0);
                            return 1;
                        } else
                            return do_word(stack, tr, cp, 2);
                    }

                case P_BYTE:
                    if (EOL(*cp)) {
                        /* Blank .BYTE.  Same as .BYTE 0 */
                        store_word(stack->top, tr, 1, 0);
                        return 1;
                    } else
                        return do_word(stack, tr, cp, 1);

                case P_BLKW:
                case P_BLKB:
                    {
                        EX_TREE        *value = parse_expr(cp, 0);
                        int             ok = 1;

                        if (value->type != EX_LIT) {
                            report(stack->top, "Argument to .BLKB/.BLKW " "must be constant\n");
                            ok = 0;
                        } else {
                            list_value(stack->top, DOT);
                            DOT += value->data.lit * (op->value == P_BLKW ? 2 : 1);
                            change_dot(tr, 0);
                        }
                        free_tree(value);
                        return ok;
                    }

                case P_ASCIZ:
                case P_ASCII:
                    {
                        EX_TREE        *value;

                        do {
                            cp = skipwhite(cp);
                            if (*cp == '<' || *cp == '^') {
                                /* A byte value */
                                value = parse_expr(cp, 0);
                                cp = value->cp;
                                store_value(stack, tr, 1, value);
                                free_tree(value);
                            } else {
                                char            quote = *cp++;

                                while (*cp && *cp != '\n' && *cp != quote)
                                    store_word(stack->top, tr, 1, *cp++);
                                cp++;  /* Skip closing quote */
                            }

                            cp = skipwhite(cp);
                        } while (!EOL(*cp));

                        if (op->value == P_ASCIZ) {
                            store_word(stack->top, tr, 1, 0);
                        }

                        return 1;
                    }

                case P_RAD50:
                    if (DOT & 1) {
                        report(stack->top, ".RAD50 on odd " "boundary\n");
                        DOT++;         /* Fix it */
                    }

                    while (!EOL(*cp)) {
                        char            endstr[6];
                        int             len;
                        char           *radstr;
                        char           *radp;

                        endstr[0] = *cp++;
                        endstr[1] = '\n';
                        endstr[2] = 0;

                        len = strcspn(cp, endstr);
                        radstr = memcheck(malloc(len + 1));
                        memcpy(radstr, cp, len);
                        radstr[len] = 0;
                        cp += len;
                        if (*cp && *cp != '\n')
                            cp++;
                        for (radp = radstr; *radp;) {
                            unsigned        rad;

                            rad = rad50(radp, &radp);
                            store_word(stack->top, tr, 2, rad);
                        }
                        free(radstr);

                        cp = skipwhite(cp);
                    }
                    return 1;

                default:
                    report(stack->top, "Unimplemented directive %s\n", op->label);
                    return 0;
                }                      /* end switch (PSEUDO operation) */

            case SECTION_INSTRUCTION:
                {
                    /* The PC must always be even. */
                    if (DOT & 1) {
                        report(stack->top, "Instruction on odd address\n");
                        DOT++;         /* ...and fix it... */
                    }

                    switch (op->flags & OC_MASK) {
                    case OC_NONE:
                        /* No operands. */
                        store_word(stack->top, tr, 2, op->value);
                        return 1;

                    case OC_MARK:
                        /* MARK, EMT, TRAP */  {
                            EX_TREE        *value;
                            unsigned        word;

                            cp = skipwhite(cp);
                            if (*cp == '#')
                                cp++;  /* Allow the hash, but
                                          don't require it */
                            value = parse_expr(cp, 0);
                            if (value->type != EX_LIT) {
                                report(stack->top, "Instruction requires " "simple literal operand\n");
                                word = op->value;
                            } else {
                                word = op->value | value->data.lit;
                            }

                            store_word(stack->top, tr, 2, word);
                            free_tree(value);
                        }
                        return 1;

                    case OC_1GEN:
                        /* One general addressing mode */  {
                            ADDR_MODE       mode;
                            unsigned        word;

                            if (!get_mode(cp, &cp, &mode)) {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            if (op->value == 0100 && (mode.type & 07) == 0) {
                                report(stack->top, "JMP Rn is illegal\n");
                                /* But encode it anyway... */
                            }

                            /* Build instruction word */
                            word = op->value | mode.type;
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &mode, stack->top);
                        }
                        return 1;

                    case OC_2GEN:
                        /* Two general addressing modes */  {
                            ADDR_MODE       left,
                                            right;
                            unsigned        word;

                            if (!get_mode(cp, &cp, &left)) {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            if (*cp++ != ',') {
                                report(stack->top, "Illegal syntax\n");
                                free_addr_mode(&left);
                                return 0;
                            }

                            if (!get_mode(cp, &cp, &right)) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_addr_mode(&left);
                                return 0;
                            }

                            /* Build instruction word */
                            word = op->value | left.type << 6 | right.type;
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &left, stack->top);
                            mode_extension(tr, &right, stack->top);
                        }
                        return 1;

                    case OC_BR:
                        /* branches */  {
                            EX_TREE        *value;
                            unsigned        offset;

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            /* Relative PSECT or absolute? */
                            if (current_pc->section->flags & PSECT_REL) {
                                SYMBOL         *sym;

                                /* Can't branch unless I can
                                   calculate the offset. */

                                /* You know, I *could* branch
                                   between sections if I feed the
                                   linker a complex relocation
                                   expression to calculate the
                                   offset.  But I won't. */

                                if (!express_sym_offset(value, &sym, &offset)
                                    || sym->section != current_pc->section) {
                                    report(stack->top, "Bad branch target\n");
                                    store_word(stack->top, tr, 2, op->value);
                                    free_tree(value);
                                    return 0;
                                }

                                /* Compute the branch offset and
                                   check for addressability */
                                offset += sym->value;
                                offset -= DOT + 2;
                            } else {
                                if (value->type != EX_LIT) {
                                    report(stack->top, "Bad branch target\n");
                                    store_word(stack->top, tr, 2, op->value);
                                    free_tree(value);
                                    return 0;
                                }

                                offset = value->data.lit - (DOT + 2);
                            }

                            if (!check_branch(stack, offset, -256, 255))
                                offset = 0;

                            /* Emit the branch code */
                            offset &= 0777;     /* Reduce to 9 bits */
                            offset >>= 1;       /* Shift to become
                                                   word offset */

                            store_word(stack->top, tr, 2, op->value | offset);

                            free_tree(value);
                        }
                        return 1;

                    case OC_SOB:
                        {
                            EX_TREE        *value;
                            unsigned        reg;
                            unsigned        offset;

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            reg = get_register(value);
                            free_tree(value);
                            if (reg == NO_REG) {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            cp = skipwhite(cp);
                            if (*cp++ != ',') {
                                report(stack->top, "Illegal syntax\n");
                                return 0;
                            }

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            /* Relative PSECT or absolute? */
                            if (current_pc->section->flags & PSECT_REL) {
                                SYMBOL         *sym;

                                if (!express_sym_offset(value, &sym, &offset)) {
                                    report(stack->top, "Bad branch target\n");
                                    free_tree(value);
                                    return 0;
                                }
                                /* Must be same section */
                                if (sym->section != current_pc->section) {
                                    report(stack->top, "Bad branch target\n");
                                    free_tree(value);
                                    offset = 0;
                                } else {
                                    /* Calculate byte offset */
                                    offset += DOT + 2;
                                    offset -= sym->value;
                                }
                            } else {
                                if (value->type != EX_LIT) {
                                    report(stack->top, "Bad branch " "target\n");
                                    offset = 0;
                                } else {
                                    offset = DOT + 2 - value->data.lit;
                                }
                            }

                            if (!check_branch(stack, offset, 0, 126))
                                offset = 0;

                            offset &= 0177;     /* Reduce to 7 bits */
                            offset >>= 1;       /* Shift to become word offset */
                            store_word(stack->top, tr, 2, op->value | offset | (reg << 6));

                            free_tree(value);
                        }
                        return 1;

                    case OC_ASH:
                        /* First op is gen, second is register. */  {
                            ADDR_MODE       mode;
                            EX_TREE        *value;
                            unsigned        reg;
                            unsigned        word;

                            if (!get_mode(cp, &cp, &mode)) {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            cp = skipwhite(cp);
                            if (*cp++ != ',') {
                                report(stack->top, "Illegal addressing mode\n");
                                free_addr_mode(&mode);
                                return 0;
                            }
                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            reg = get_register(value);
                            if (reg == NO_REG) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                free_addr_mode(&mode);
                                return 0;
                            }

                            /* Instruction word */
                            word = op->value | mode.type | (reg << 6);
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &mode, stack->top);
                            free_tree(value);
                        }
                        return 1;

                    case OC_JSR:
                        /* First op is register, second is gen. */  {
                            ADDR_MODE       mode;
                            EX_TREE        *value;
                            unsigned        reg;
                            unsigned        word;

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            reg = get_register(value);
                            if (reg == NO_REG) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                return 0;
                            }

                            cp = skipwhite(cp);
                            if (*cp++ != ',') {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            if (!get_mode(cp, &cp, &mode)) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                return 0;
                            }
                            word = op->value | mode.type | (reg << 6);
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &mode, stack->top);
                            free_tree(value);
                        }
                        return 1;

                    case OC_1REG:
                        /* One register (RTS) */  {
                            EX_TREE        *value;
                            unsigned        reg;

                            value = parse_expr(cp, 0);
                            cp = value->cp;
                            reg = get_register(value);
                            if (reg == NO_REG) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                reg = 0;
                            }

                            store_word(stack->top, tr, 2, op->value | reg);
                            free_tree(value);
                        }
                        return 1;

                    case OC_1FIS:
                        /* One one gen and one reg 0-3 */  {
                            ADDR_MODE       mode;
                            EX_TREE        *value;
                            unsigned        reg;
                            unsigned        word;

                            if (!get_mode(cp, &cp, &mode)) {
                                report(stack->top, "Illegal addressing mode\n");
                                return 0;
                            }

                            cp = skipwhite(cp);
                            if (*cp++ != ',') {
                                report(stack->top, "Illegal addressing mode\n");
                                free_addr_mode(&mode);
                                return 0;
                            }

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            reg = get_register(value);
                            if (reg == NO_REG || reg > 4) {
                                report(stack->top, "Invalid destination register\n");
                                reg = 0;
                            }

                            word = op->value | mode.type | (reg << 6);
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &mode, stack->top);
                            free_tree(value);
                        }
                        return 1;

                    case OC_2FIS:
                        /* One reg 0-3 and one gen */  {
                            ADDR_MODE       mode;
                            EX_TREE        *value;
                            unsigned        reg;
                            unsigned        word;
                            int             ok = 1;

                            value = parse_expr(cp, 0);
                            cp = value->cp;

                            reg = get_register(value);
                            if (reg == NO_REG || reg > 4) {
                                report(stack->top, "Illegal source register\n");
                                reg = 0;
                                ok = 0;
                            }

                            cp = skipwhite(cp);
                            if (*cp++ != ',') {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                return 0;
                            }

                            if (!get_mode(cp, &cp, &mode)) {
                                report(stack->top, "Illegal addressing mode\n");
                                free_tree(value);
                                return 0;
                            }

                            word = op->value | mode.type | (reg << 6);
                            store_word(stack->top, tr, 2, word);
                            mode_extension(tr, &mode, stack->top);
                            free_tree(value);
                        }
                        return 1;

                    default:
                        report(stack->top, "Unimplemented instruction format\n");
                        return 0;
                    }                  /* end(handle an instruction) */
                }
                break;
            }                          /* end switch(section type) */
        }                              /* end if (op is a symbol) */
    }

    /* Only thing left is an implied .WORD directive */
    /*JH: fall through in case of illegal opcode, illegal label! */
    free(label);

    return do_word(stack, tr, cp, 2);
}

/* assemble_stack assembles the input stack.  It returns the error
   count. */

int assemble_stack(
    STACK *stack,
    TEXT_RLD *tr)
{
    int             res;
    int             errcount = 0;

    while ((res = assemble(stack, tr)) >= 0) {
        list_flush();
        if (res == 0)
            errcount++;                   /* Count an error */
    }

    return errcount;
}
