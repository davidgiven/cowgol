
#define SYMBOLS__C

#include <stdlib.h>
#include <string.h>

#include "symbols.h"                   /* my own definitions */

#include "util.h"
#include "assemble_globals.h"
#include "listing.h"

/* GLOBALS */
int             symbol_len = SYMMAX_DEFAULT;    /* max. len of symbols. default = 6 */
int             symbol_allow_underscores = 0;   /* allow "_" in symbol names */

SYMBOL         *reg_sym[8];     /* Keep the register symbols in a handy array */


SYMBOL_TABLE    system_st;      /* System symbols (Instructions,
                                   pseudo-ops, registers) */

SYMBOL_TABLE    section_st;     /* Program sections */

SYMBOL_TABLE    symbol_st;      /* User symbols */

SYMBOL_TABLE    macro_st;       /* Macros */

SYMBOL_TABLE    implicit_st;    /* The symbols which may be implicit globals */



/* hash_name hashes a name into a value from 0-HASH_SIZE */

int hash_name(
    char *label)
{
    unsigned        accum = 0;

    while (*label)
        accum = (accum << 1) ^ *label++;

    accum %= HASH_SIZE;

    return accum;
}



/* Diagnostic: symflags returns a char* which gives flags I can use to
   show the context of a symbol. */

char           *symflags(
    SYMBOL *sym)
{
    static char     temp[8];
    char           *fp = temp;

    if (sym->flags & SYMBOLFLAG_GLOBAL)
        *fp++ = 'G';
    if (sym->flags & SYMBOLFLAG_PERMANENT)
        *fp++ = 'P';
    if (sym->flags & SYMBOLFLAG_DEFINITION)
        *fp++ = 'D';
    *fp = 0;
    return fp;
}



/* Allocate a new symbol.  Does not add it to any symbol table. */

static SYMBOL  *new_sym(
    char *label)
{
    SYMBOL         *sym = memcheck(malloc(sizeof(SYMBOL)));

    sym->label = memcheck(strdup(label));
    sym->section = NULL;
    sym->value = 0;
    sym->flags = 0;
    return sym;
}

/* Free a symbol. Does not remove it from any symbol table.  */

void free_sym(
    SYMBOL *sym)
{
    if (sym->label) {
        free(sym->label);
        sym->label = NULL;
    }
    free(sym);
}

/* remove_sym removes a symbol from it's symbol table. */

void remove_sym(
    SYMBOL *sym,
    SYMBOL_TABLE *table)
{
    SYMBOL        **prevp,
                   *symp;
    int             hash;

    hash = hash_name(sym->label);
    prevp = &table->hash[hash];
    while (symp = *prevp, symp != NULL && symp != sym)
        prevp = &symp->next;

    if (symp)
        *prevp = sym->next;
}

/* lookup_sym finds a symbol in a table */

SYMBOL         *lookup_sym(
    char *label,
    SYMBOL_TABLE *table)
{
    unsigned        hash;
    SYMBOL         *sym;

    hash = hash_name(label);

    sym = table->hash[hash];
    while (sym && strcmp(sym->label, label) != 0)
        sym = sym->next;

    return sym;
}

/* next_sym - returns the next symbol from a symbol table.  Must be
   preceeded by first_sym.  Returns NULL after the last symbol. */

SYMBOL         *next_sym(
    SYMBOL_TABLE *table,
    SYMBOL_ITER *iter)
{
    if (iter->current)
        iter->current = iter->current->next;

    while (iter->current == NULL) {
        if (iter->subscript >= HASH_SIZE)
            return NULL;               /* No more symbols. */
        iter->current = table->hash[iter->subscript];
        iter->subscript++;
    }

    return iter->current;              /* Got a symbol. */
}

/* first_sym - returns the first symbol from a symbol table. Symbols
   are stored in random order. */

SYMBOL         *first_sym(
    SYMBOL_TABLE *table,
    SYMBOL_ITER *iter)
{
    iter->subscript = 0;
    iter->current = NULL;
    return next_sym(table, iter);
}

/* add_table - add a symbol to a symbol table. */

void add_table(
    SYMBOL *sym,
    SYMBOL_TABLE *table)
{
    int             hash = hash_name(sym->label);

    sym->next = table->hash[hash];
    table->hash[hash] = sym;
}

/* add_sym - used throughout to add or update symbols in a symbol
   table.  */

SYMBOL         *add_sym(
    char *labelraw,
    unsigned value,
    unsigned flags,
    SECTION *section,
    SYMBOL_TABLE *table)
{
    SYMBOL         *sym;
    char            label[SYMMAX_MAX + 1];      // big size

    //JH: truncate symbol to SYMMAX
    strncpy(label, labelraw, symbol_len);
    label[symbol_len] = 0;

    sym = lookup_sym(label, table);
    if (sym != NULL) {
        // A symbol registered as "undefined" can be changed.

        if ((sym->flags & SYMBOLFLAG_UNDEFINED) && !(flags & SYMBOLFLAG_UNDEFINED)) {
            sym->flags &= ~(SYMBOLFLAG_PERMANENT | SYMBOLFLAG_UNDEFINED);
        }

        /* Check for compatible definition */
        else if (sym->section == section && sym->value == value) {
            sym->flags |= flags;       /* Merge flags quietly */
            return sym;                /* 's okay */
        }

        if (!(sym->flags & SYMBOLFLAG_PERMANENT)) {
            /* permit redefinition */
            sym->value = value;
            sym->flags |= flags;
            sym->section = section;
            return sym;
        }

        return NULL;                   /* Bad symbol redefinition */
    }

    sym = new_sym(label);
    sym->flags = flags;
    sym->stmtno = stmtno;
    sym->section = section;
    sym->value = value;

    add_table(sym, table);

    return sym;
}

/* add_symbols adds all the internal symbols. */

void add_symbols(
    SECTION *current_section)
{
    current_pc = add_sym(".", 0, 0, current_section, &symbol_st);

    reg_sym[0] = add_sym("R0", 0, 0, &register_section, &system_st);
    reg_sym[1] = add_sym("R1", 1, 0, &register_section, &system_st);
    reg_sym[2] = add_sym("R2", 2, 0, &register_section, &system_st);
    reg_sym[3] = add_sym("R3", 3, 0, &register_section, &system_st);
    reg_sym[4] = add_sym("R4", 4, 0, &register_section, &system_st);
    reg_sym[5] = add_sym("R5", 5, 0, &register_section, &system_st);
    reg_sym[6] = add_sym("SP", 6, 0, &register_section, &system_st);
    reg_sym[7] = add_sym("PC", 7, 0, &register_section, &system_st);

    //JH: symbols longer than current SYMMAX will be truncated. SYMMAX=6 is minimum!
    add_sym(".ASCII", P_ASCII, 0, &pseudo_section, &system_st);
    add_sym(".ASCIZ", P_ASCIZ, 0, &pseudo_section, &system_st);
    add_sym(".ASECT", P_ASECT, 0, &pseudo_section, &system_st);
    add_sym(".BLKB", P_BLKB, 0, &pseudo_section, &system_st);
    add_sym(".BLKW", P_BLKW, 0, &pseudo_section, &system_st);
    add_sym(".BYTE", P_BYTE, 0, &pseudo_section, &system_st);
    add_sym(".CSECT", P_CSECT, 0, &pseudo_section, &system_st);
    add_sym(".DSABL", P_DSABL, 0, &pseudo_section, &system_st);
    add_sym(".ENABL", P_ENABL, 0, &pseudo_section, &system_st);
    add_sym(".END", P_END, 0, &pseudo_section, &system_st);
    add_sym(".ENDC", P_ENDC, 0, &pseudo_section, &system_st);
    add_sym(".ENDM", P_ENDM, 0, &pseudo_section, &system_st);
    add_sym(".ENDR", P_ENDR, 0, &pseudo_section, &system_st);
    add_sym(".EOT", P_EOT, 0, &pseudo_section, &system_st);
    add_sym(".ERROR", P_ERROR, 0, &pseudo_section, &system_st);
    add_sym(".EVEN", P_EVEN, 0, &pseudo_section, &system_st);
    add_sym(".FLT2", P_FLT2, 0, &pseudo_section, &system_st);
    add_sym(".FLT4", P_FLT4, 0, &pseudo_section, &system_st);
    add_sym(".GLOBL", P_GLOBL, 0, &pseudo_section, &system_st);
    add_sym(".IDENT", P_IDENT, 0, &pseudo_section, &system_st);
    add_sym(".IF", P_IF, 0, &pseudo_section, &system_st);
    add_sym(".IFDF", P_IFDF, 0, &pseudo_section, &system_st);
    add_sym(".IFNDF", P_IFDF, 0, &pseudo_section, &system_st);
    add_sym(".IFF", P_IFF, 0, &pseudo_section, &system_st);
    add_sym(".IFT", P_IFT, 0, &pseudo_section, &system_st);
    add_sym(".IFTF", P_IFTF, 0, &pseudo_section, &system_st);
    add_sym(".IIF", P_IIF, 0, &pseudo_section, &system_st);
    add_sym(".INCLUDE", P_INCLUDE, 0, &pseudo_section, &system_st);
    add_sym(".IRP", P_IRP, 0, &pseudo_section, &system_st);
    add_sym(".IRPC", P_IRPC, 0, &pseudo_section, &system_st);
    add_sym(".LIMIT", P_LIMIT, 0, &pseudo_section, &system_st);
    add_sym(".LIST", P_LIST, 0, &pseudo_section, &system_st);
    add_sym(".MCALL", P_MCALL, 0, &pseudo_section, &system_st);
    add_sym(".MEXIT", P_MEXIT, 0, &pseudo_section, &system_st);
    add_sym(".NARG", P_NARG, 0, &pseudo_section, &system_st);
    add_sym(".NCHR", P_NCHR, 0, &pseudo_section, &system_st);
    add_sym(".NLIST", P_NLIST, 0, &pseudo_section, &system_st);
    add_sym(".NTYPE", P_NTYPE, 0, &pseudo_section, &system_st);
    add_sym(".ODD", P_ODD, 0, &pseudo_section, &system_st);
    add_sym(".PACKED", P_PACKED, 0, &pseudo_section, &system_st);
    add_sym(".PAGE", P_PAGE, 0, &pseudo_section, &system_st);
    add_sym(".PRINT", P_PRINT, 0, &pseudo_section, &system_st);
    add_sym(".PSECT", P_PSECT, 0, &pseudo_section, &system_st);
    add_sym(".RADIX", P_RADIX, 0, &pseudo_section, &system_st);
    add_sym(".RAD50", P_RAD50, 0, &pseudo_section, &system_st);
    add_sym(".REM", P_REM, 0, &pseudo_section, &system_st);
    add_sym(".REPT", P_REPT, 0, &pseudo_section, &system_st);
    add_sym(".RESTORE", P_RESTORE, 0, &pseudo_section, &system_st);
    add_sym(".SAVE", P_SAVE, 0, &pseudo_section, &system_st);
    add_sym(".SBTTL", P_SBTTL, 0, &pseudo_section, &system_st);
    add_sym(".TITLE", P_TITLE, 0, &pseudo_section, &system_st);
    add_sym(".WORD", P_WORD, 0, &pseudo_section, &system_st);
    add_sym(".MACRO", P_MACRO, 0, &pseudo_section, &system_st);
    add_sym(".WEAK", P_WEAK, 0, &pseudo_section, &system_st);

    add_sym("ADC", I_ADC, OC_1GEN, &instruction_section, &system_st);
    add_sym("ADCB", I_ADCB, OC_1GEN, &instruction_section, &system_st);
    add_sym("ADD", I_ADD, OC_2GEN, &instruction_section, &system_st);
    add_sym("ASH", I_ASH, OC_ASH, &instruction_section, &system_st);
    add_sym("ASHC", I_ASHC, OC_ASH, &instruction_section, &system_st);
    add_sym("ASL", I_ASL, OC_1GEN, &instruction_section, &system_st);
    add_sym("ASLB", I_ASLB, OC_1GEN, &instruction_section, &system_st);
    add_sym("ASR", I_ASR, OC_1GEN, &instruction_section, &system_st);
    add_sym("ASRB", I_ASRB, OC_1GEN, &instruction_section, &system_st);
    add_sym("BCC", I_BCC, OC_BR, &instruction_section, &system_st);
    add_sym("BCS", I_BCS, OC_BR, &instruction_section, &system_st);
    add_sym("BEQ", I_BEQ, OC_BR, &instruction_section, &system_st);
    add_sym("BGE", I_BGE, OC_BR, &instruction_section, &system_st);
    add_sym("BGT", I_BGT, OC_BR, &instruction_section, &system_st);
    add_sym("BHI", I_BHI, OC_BR, &instruction_section, &system_st);
    add_sym("BHIS", I_BHIS, OC_BR, &instruction_section, &system_st);
    add_sym("BIC", I_BIC, OC_2GEN, &instruction_section, &system_st);
    add_sym("BICB", I_BICB, OC_2GEN, &instruction_section, &system_st);
    add_sym("BIS", I_BIS, OC_2GEN, &instruction_section, &system_st);
    add_sym("BISB", I_BISB, OC_2GEN, &instruction_section, &system_st);
    add_sym("BIT", I_BIT, OC_2GEN, &instruction_section, &system_st);
    add_sym("BITB", I_BITB, OC_2GEN, &instruction_section, &system_st);
    add_sym("BLE", I_BLE, OC_BR, &instruction_section, &system_st);
    add_sym("BLO", I_BLO, OC_BR, &instruction_section, &system_st);
    add_sym("BLOS", I_BLOS, OC_BR, &instruction_section, &system_st);
    add_sym("BLT", I_BLT, OC_BR, &instruction_section, &system_st);
    add_sym("BMI", I_BMI, OC_BR, &instruction_section, &system_st);
    add_sym("BNE", I_BNE, OC_BR, &instruction_section, &system_st);
    add_sym("BPL", I_BPL, OC_BR, &instruction_section, &system_st);
    add_sym("BPT", I_BPT, OC_NONE, &instruction_section, &system_st);
    add_sym("BR", I_BR, OC_BR, &instruction_section, &system_st);
    add_sym("BVC", I_BVC, OC_BR, &instruction_section, &system_st);
    add_sym("BVS", I_BVS, OC_BR, &instruction_section, &system_st);
    add_sym("CALL", I_CALL, OC_1GEN, &instruction_section, &system_st);
    add_sym("CALLR", I_CALLR, OC_1GEN, &instruction_section, &system_st);
    add_sym("CCC", I_CCC, OC_NONE, &instruction_section, &system_st);
    add_sym("CLC", I_CLC, OC_NONE, &instruction_section, &system_st);
    add_sym("CLN", I_CLN, OC_NONE, &instruction_section, &system_st);
    add_sym("CLR", I_CLR, OC_1GEN, &instruction_section, &system_st);
    add_sym("CLRB", I_CLRB, OC_1GEN, &instruction_section, &system_st);
    add_sym("CLV", I_CLV, OC_NONE, &instruction_section, &system_st);
    add_sym("CLZ", I_CLZ, OC_NONE, &instruction_section, &system_st);
    add_sym("CMP", I_CMP, OC_2GEN, &instruction_section, &system_st);
    add_sym("CMPB", I_CMPB, OC_2GEN, &instruction_section, &system_st);
    add_sym("COM", I_COM, OC_1GEN, &instruction_section, &system_st);
    add_sym("COMB", I_COMB, OC_1GEN, &instruction_section, &system_st);
    add_sym("DEC", I_DEC, OC_1GEN, &instruction_section, &system_st);
    add_sym("DECB", I_DECB, OC_1GEN, &instruction_section, &system_st);
    add_sym("DIV", I_DIV, OC_ASH, &instruction_section, &system_st);
    add_sym("EMT", I_EMT, OC_MARK, &instruction_section, &system_st);
    add_sym("FADD", I_FADD, OC_1REG, &instruction_section, &system_st);
    add_sym("FDIV", I_FDIV, OC_1REG, &instruction_section, &system_st);
    add_sym("FMUL", I_FMUL, OC_1REG, &instruction_section, &system_st);
    add_sym("FSUB", I_FSUB, OC_1REG, &instruction_section, &system_st);
    add_sym("HALT", I_HALT, OC_NONE, &instruction_section, &system_st);
    add_sym("INC", I_INC, OC_1GEN, &instruction_section, &system_st);
    add_sym("INCB", I_INCB, OC_1GEN, &instruction_section, &system_st);
    add_sym("IOT", I_IOT, OC_NONE, &instruction_section, &system_st);
    add_sym("JMP", I_JMP, OC_1GEN, &instruction_section, &system_st);
    add_sym("JSR", I_JSR, OC_JSR, &instruction_section, &system_st);
    add_sym("MARK", I_MARK, OC_MARK, &instruction_section, &system_st);
    add_sym("MED6X", I_MED6X, OC_NONE, &instruction_section, &system_st);
    add_sym("MED74C", I_MED74C, OC_NONE, &instruction_section, &system_st);
    add_sym("MFPD", I_MFPD, OC_1GEN, &instruction_section, &system_st);
    add_sym("MFPI", I_MFPI, OC_1GEN, &instruction_section, &system_st);
    add_sym("MFPS", I_MFPS, OC_1GEN, &instruction_section, &system_st);
    add_sym("MOV", I_MOV, OC_2GEN, &instruction_section, &system_st);
    add_sym("MOVB", I_MOVB, OC_2GEN, &instruction_section, &system_st);
    add_sym("MTPD", I_MTPD, OC_1GEN, &instruction_section, &system_st);
    add_sym("MTPI", I_MTPI, OC_1GEN, &instruction_section, &system_st);
    add_sym("MTPS", I_MTPS, OC_1GEN, &instruction_section, &system_st);
    add_sym("MUL", I_MUL, OC_ASH, &instruction_section, &system_st);
    add_sym("NEG", I_NEG, OC_1GEN, &instruction_section, &system_st);
    add_sym("NEGB", I_NEGB, OC_1GEN, &instruction_section, &system_st);
    add_sym("NOP", I_NOP, OC_NONE, &instruction_section, &system_st);
    add_sym("RESET", I_RESET, OC_NONE, &instruction_section, &system_st);
    add_sym("RETURN", I_RETURN, OC_NONE, &instruction_section, &system_st);
    add_sym("ROL", I_ROL, OC_1GEN, &instruction_section, &system_st);
    add_sym("ROLB", I_ROLB, OC_1GEN, &instruction_section, &system_st);
    add_sym("ROR", I_ROR, OC_1GEN, &instruction_section, &system_st);
    add_sym("RORB", I_RORB, OC_1GEN, &instruction_section, &system_st);
    add_sym("RTI", I_RTI, OC_NONE, &instruction_section, &system_st);
    add_sym("RTS", I_RTS, OC_1REG, &instruction_section, &system_st);
    add_sym("RTT", I_RTT, OC_NONE, &instruction_section, &system_st);
    add_sym("SBC", I_SBC, OC_1GEN, &instruction_section, &system_st);
    add_sym("SBCB", I_SBCB, OC_1GEN, &instruction_section, &system_st);
    add_sym("SCC", I_SCC, OC_NONE, &instruction_section, &system_st);
    add_sym("SEC", I_SEC, OC_NONE, &instruction_section, &system_st);
    add_sym("SEN", I_SEN, OC_NONE, &instruction_section, &system_st);
    add_sym("SEV", I_SEV, OC_NONE, &instruction_section, &system_st);
    add_sym("SEZ", I_SEZ, OC_NONE, &instruction_section, &system_st);
    add_sym("SOB", I_SOB, OC_SOB, &instruction_section, &system_st);
    add_sym("SPL", I_SPL, OC_1REG, &instruction_section, &system_st);
    add_sym("SUB", I_SUB, OC_2GEN, &instruction_section, &system_st);
    add_sym("SWAB", I_SWAB, OC_1GEN, &instruction_section, &system_st);
    add_sym("SXT", I_SXT, OC_1GEN, &instruction_section, &system_st);
    add_sym("TRAP", I_TRAP, OC_MARK, &instruction_section, &system_st);
    add_sym("TST", I_TST, OC_1GEN, &instruction_section, &system_st);
    add_sym("TSTB", I_TSTB, OC_1GEN, &instruction_section, &system_st);
    add_sym("WAIT", I_WAIT, OC_NONE, &instruction_section, &system_st);
    add_sym("XFC", I_XFC, OC_NONE, &instruction_section, &system_st);
    add_sym("XOR", I_XOR, OC_JSR, &instruction_section, &system_st);
    add_sym("MFPT", I_MFPT, OC_NONE, &instruction_section, &system_st);

    add_sym("ABSD", I_ABSD, OC_1GEN, &instruction_section, &system_st);
    add_sym("ABSF", I_ABSF, OC_1GEN, &instruction_section, &system_st);
    add_sym("ADDD", I_ADDD, OC_1FIS, &instruction_section, &system_st);
    add_sym("ADDF", I_ADDF, OC_1FIS, &instruction_section, &system_st);
    add_sym("CFCC", I_CFCC, OC_NONE, &instruction_section, &system_st);
    add_sym("CLRD", I_CLRD, OC_1GEN, &instruction_section, &system_st);
    add_sym("CLRF", I_CLRF, OC_1GEN, &instruction_section, &system_st);
    add_sym("CMPD", I_CMPD, OC_1FIS, &instruction_section, &system_st);
    add_sym("CMPF", I_CMPF, OC_1FIS, &instruction_section, &system_st);
    add_sym("DIVD", I_DIVD, OC_1FIS, &instruction_section, &system_st);
    add_sym("DIVF", I_DIVF, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDCDF", I_LDCDF, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDCID", I_LDCID, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDCIF", I_LDCIF, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDCLD", I_LDCLD, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDCLF", I_LDCLF, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDD", I_LDD, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDEXP", I_LDEXP, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDF", I_LDF, OC_1FIS, &instruction_section, &system_st);
    add_sym("LDFPS", I_LDFPS, OC_1GEN, &instruction_section, &system_st);
    add_sym("MODD", I_MODD, OC_1FIS, &instruction_section, &system_st);
    add_sym("MODF", I_MODF, OC_1FIS, &instruction_section, &system_st);
    add_sym("MULD", I_MULD, OC_1FIS, &instruction_section, &system_st);
    add_sym("MULF", I_MULF, OC_1FIS, &instruction_section, &system_st);
    add_sym("NEGD", I_NEGD, OC_1GEN, &instruction_section, &system_st);
    add_sym("NEGF", I_NEGF, OC_1GEN, &instruction_section, &system_st);
    add_sym("SETD", I_SETD, OC_NONE, &instruction_section, &system_st);
    add_sym("SETF", I_SETF, OC_NONE, &instruction_section, &system_st);
    add_sym("SETI", I_SETI, OC_NONE, &instruction_section, &system_st);
    add_sym("SETL", I_SETL, OC_NONE, &instruction_section, &system_st);
    add_sym("STA0", I_STA0, OC_NONE, &instruction_section, &system_st);
    add_sym("STB0", I_STB0, OC_NONE, &instruction_section, &system_st);
    add_sym("STCDF", I_STCDF, OC_2FIS, &instruction_section, &system_st);
    add_sym("STCDI", I_STCDI, OC_2FIS, &instruction_section, &system_st);
    add_sym("STCDL", I_STCDL, OC_2FIS, &instruction_section, &system_st);
    add_sym("STCFD", I_STCFD, OC_2FIS, &instruction_section, &system_st);
    add_sym("STCFI", I_STCFI, OC_2FIS, &instruction_section, &system_st);
    add_sym("STCFL", I_STCFL, OC_2FIS, &instruction_section, &system_st);
    add_sym("STD", I_STD, OC_2FIS, &instruction_section, &system_st);
    add_sym("STEXP", I_STEXP, OC_2FIS, &instruction_section, &system_st);
    add_sym("STF", I_STF, OC_2FIS, &instruction_section, &system_st);
    add_sym("STFPS", I_STFPS, OC_1GEN, &instruction_section, &system_st);
    add_sym("STST", I_STST, OC_1GEN, &instruction_section, &system_st);
    add_sym("SUBD", I_SUBD, OC_1FIS, &instruction_section, &system_st);
    add_sym("SUBF", I_SUBF, OC_1FIS, &instruction_section, &system_st);
    add_sym("TSTD", I_TSTD, OC_1GEN, &instruction_section, &system_st);
    add_sym("TSTF", I_TSTF, OC_1GEN, &instruction_section, &system_st);

    /* FIXME: The CIS instructions are missing! */

    add_sym(current_section->label, 0, 0, current_section, &section_st);
}

/* sym_hist is a diagnostic function that prints a histogram of the
   hash table useage of a symbol table.  I used this to try to tune
   the hash function for better spread.  It's not used now. */

static void sym_hist(
    SYMBOL_TABLE *st,
    char *name)
{
    int             i;
    SYMBOL         *sym;

    fprintf(lstfile, "Histogram for symbol table %s\n", name);
    for (i = 0; i < 1023; i++) {
        fprintf(lstfile, "%4d: ", i);
        for (sym = st->hash[i]; sym != NULL; sym = sym->next)
            fputc('#', lstfile);
        fputc('\n', lstfile);
    }
}
