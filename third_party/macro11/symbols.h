
#ifndef SYMBOLS__H
#define SYMBOLS__H

/* max symbol_len can be adjusted between SYMMAX_DEFAULT and SYMMAX_MAX*/
#define SYMMAX_DEFAULT 6               /* I will honor this many character symbols */

#define SYMMAX_MAX 64


/* Program sections: */
typedef struct section {
    char           *label;      /* Section name */
    unsigned        type;       /* Section type */
#define SECTION_USER 1          /* user-defined */
#define SECTION_SYSTEM 2        /* A system symbol (like "."; value is an enum) */
#define SECTION_INSTRUCTION 3   /* An instruction code (like "MOV"; value is an enum) */
#define SECTION_PSEUDO 4        /* A pseudo-op (.PSECT, .TITLE, .MACRO, .IF; value is an enum) */
#define SECTION_REGISTER 5      /* Symbol is a register (value 0=$0, value 1=$1, ... $7) */
#define SECTION_USERMACRO 6     /* Symbol is a user macro */

    unsigned        flags;      /* Flags, defined in object.h */
    unsigned        pc;         /* Current offset in the section */
    unsigned        size;       /* Current section size */
    unsigned        sector;     /* Used for complex relocation, and naught else */
} SECTION;

/* Symbol table entries */

typedef struct symbol {
    char           *label;      /* Symbol name */
    unsigned        value;      /* Symbol value */
    int             stmtno;     /* Statement number of symbol's definition */
    unsigned        flags;      /* Symbol flags */
#define SYMBOLFLAG_PERMANENT 1  /* Symbol may not be redefined */
#define SYMBOLFLAG_GLOBAL 2     /* Symbol is global */
#define SYMBOLFLAG_WEAK 4       /* Symbol definition is weak */
#define SYMBOLFLAG_DEFINITION 8 /* Symbol is a global definition, not reference */
#define SYMBOLFLAG_UNDEFINED 16 /* Symbol is a phony, undefined */
#define SYMBOLFLAG_LOCAL 32     /* Set if this is a local label (i.e. 10$) */

    SECTION        *section;    /* Section in which this symbol is defined */
    struct symbol  *next;       /* Next symbol with the same hash value */
} SYMBOL;




enum pseudo_ops { P_ASCII,
    P_ASCIZ,
    P_ASECT,
    P_BLKB,
    P_BLKW,
    P_BYTE,
    P_CSECT,
    P_DSABL,
    P_ENABL,
    P_END,
    P_ENDC,
    P_ENDM,
    P_ENDR,
    P_EOT,
    P_ERROR,
    P_EVEN,
    P_FLT2,
    P_FLT4,
    P_GLOBL,
    P_IDENT,
    P_IF,
    P_IFF,
    P_IFT,
    P_IFTF,
    P_IIF,
    P_IRP,
    P_IRPC,
    P_LIMIT,
    P_LIST,
    P_MCALL,
    P_MEXIT,
    P_NARG,
    P_NCHR,
    P_NLIST,
    P_NTYPE,
    P_ODD,
    P_PACKED,
    P_PAGE,
    P_PRINT,
    P_PSECT,
    P_RADIX,
    P_RAD50,
    P_REM,
    P_REPT,
    P_RESTORE,
    P_SAVE,
    P_SBTTL,
    P_TITLE,
    P_WORD,
    P_MACRO,
    P_INCLUDE,
    P_WEAK,
    P_IFDF
};

enum instruction_ops { I_ADC = 0005500,
    I_ADCB = 0105500,
    I_ADD = 0060000,
    I_ASH = 0072000,
    I_ASHC = 0073000,
    I_ASL = 0006300,
    I_ASLB = 0106300,
    I_ASR = 0006200,
    I_ASRB = 0106200,
    I_BCC = 0103000,
    I_BCS = 0103400,
    I_BEQ = 0001400,
    I_BGE = 0002000,
    I_BGT = 0003000,
    I_BHI = 0101000,
    I_BHIS = 0103000,
    I_BIC = 0040000,
    I_BICB = 0140000,
    I_BIS = 0050000,
    I_BISB = 0150000,
    I_BIT = 0030000,
    I_BITB = 0130000,
    I_BLE = 0003400,
    I_BLO = 0103400,
    I_BLOS = 0101400,
    I_BLT = 0002400,
    I_BMI = 0100400,
    I_BNE = 0001000,
    I_BPL = 0100000,
    I_BPT = 0000003,
    I_BR = 0000400,
    I_BVC = 0102000,
    I_BVS = 0102400,
    I_CALL = 0004700,
    I_CALLR = 0000100,
    I_CCC = 0000257,
    I_CLC = 0000241,
    I_CLN = 0000250,
    I_CLR = 0005000,
    I_CLRB = 0105000,
    I_CLV = 0000242,
    I_CLZ = 0000244,
    I_CMP = 0020000,
    I_CMPB = 0120000,
    I_COM = 0005100,
    I_COMB = 0105100,
    I_DEC = 0005300,
    I_DECB = 0105300,
    I_DIV = 0071000,
    I_EMT = 0104000,
    I_FADD = 0075000,
    I_FDIV = 0075030,
    I_FMUL = 0075020,
    I_FSUB = 0075010,
    I_HALT = 0000000,
    I_INC = 0005200,
    I_INCB = 0105200,
    I_IOT = 0000004,
    I_JMP = 0000100,
    I_JSR = 0004000,
    I_MARK = 0006400,
    I_MED6X = 0076600,
    I_MED74C = 0076601,
    I_MFPD = 0106500,
    I_MFPI = 0006500,
    I_MFPS = 0106700,
    I_MOV = 0010000,
    I_MOVB = 0110000,
    I_MTPD = 0106600,
    I_MTPI = 0006600,
    I_MTPS = 0106400,
    I_MUL = 0070000,
    I_NEG = 0005400,
    I_NEGB = 0105400,
    I_NOP = 0000240,
    I_RESET = 0000005,
    I_RETURN = 0000207,
    I_ROL = 0006100,
    I_ROLB = 0106100,
    I_ROR = 0006000,
    I_RORB = 0106000,
    I_RTI = 0000002,
    I_RTS = 0000200,
    I_RTT = 0000006,
    I_SBC = 0005600,
    I_SBCB = 0105600,
    I_SCC = 0000277,
    I_SEC = 0000261,
    I_SEN = 0000270,
    I_SEV = 0000262,
    I_SEZ = 0000264,
    I_SOB = 0077000,
    I_SPL = 0000230,
    I_SUB = 0160000,
    I_SWAB = 0000300,
    I_SXT = 0006700,
    I_TRAP = 0104400,
    I_TST = 0005700,
    I_TSTB = 0105700,
    I_WAIT = 0000001,
    I_XFC = 0076700,
    I_XOR = 0074000,
    I_MFPT = 0000007,
    /* CIS not implemented - maybe later */
    /* FPU */
    I_ABSD = 0170600,
    I_ABSF = 0170600,
    I_ADDD = 0172000,
    I_ADDF = 0172000,
    I_CFCC = 0170000,
    I_CLRD = 0170400,
    I_CLRF = 0170400,
    I_CMPD = 0173400,
    I_CMPF = 0173400,
    I_DIVD = 0174400,
    I_DIVF = 0174400,
    I_LDCDF = 0177400,
    I_LDCFD = 0177400,
    I_LDCID = 0177000,
    I_LDCIF = 0177000,
    I_LDCLD = 0177000,
    I_LDCLF = 0177000,
    I_LDD = 0172400,
    I_LDEXP = 0176400,
    I_LDF = 0172400,
    I_LDFPS = 0170100,
    I_MODD = 0171400,
    I_MODF = 0171400,
    I_MULD = 0171000,
    I_MULF = 0171000,
    I_NEGD = 0170700,
    I_NEGF = 0170700,
    I_SETD = 0170011,
    I_SETF = 0170001,
    I_SETI = 0170002,
    I_SETL = 0170012,
    I_STA0 = 0170005,
    I_STB0 = 0170006,
    I_STCDF = 0176000,
    I_STCDI = 0175400,
    I_STCDL = 0175400,
    I_STCFD = 0176000,
    I_STCFI = 0175400,
    I_STCFL = 0175400,
    I_STD = 0174000,
    I_STEXP = 0175000,
    I_STF = 0174000,
    I_STFPS = 0170200,
    I_STST = 0170300,
    I_SUBD = 0173000,
    I_SUBF = 0173000,
    I_TSTD = 0170500,
    I_TSTF = 0170500
};

enum operand_codes { OC_MASK = 0xff00,
    /* mask over flags for operand types */
    OC_NONE = 0x0000,
    /* No operands */
    OC_1GEN = 0x0100,
    /* One general operand (CLR, TST, etc.) */
    OC_2GEN = 0x0200,
    /* Two general operand (MOV, CMP, etc.) */
    OC_BR = 0x0300,
    /* Branch */
    OC_ASH = 0x0400,
    /* ASH and ASHC (one gen, one reg) */
    OC_MARK = 0x0500,
    /* MARK instruction operand */
    OC_JSR = 0x0600,
    /* JSR, XOR (one reg, one gen) */
    OC_1REG = 0x0700,
    /* FADD, FSUB, FMUL, FDIV, RTS */
    OC_SOB = 0x0800,
    /* SOB */
    OC_1FIS = 0x0900,
    /* FIS (reg, gen) */
    OC_2FIS = 0x0a00,
    /* FIS (gen, reg) */
    OC__LAST = 0xff00
};



/* symbol tables */

#define HASH_SIZE 1023

typedef struct symbol_table {
    SYMBOL         *hash[HASH_SIZE];
} SYMBOL_TABLE;


/* SYMBOL_ITER is used for iterating thru a symbol table. */
typedef struct symbol_iter {
    int             subscript;  /* Current hash subscript */
    SYMBOL         *current;    /* Current symbol */
} SYMBOL_ITER;


#ifndef SYMBOLS__C

extern int      symbol_len;     /* max. len of symbols. default = 6 */
extern int      symbol_allow_underscores;       /* allow "_" in symbol names */

extern SYMBOL  *reg_sym[8];     /* Keep the register symbols in a handy array */

extern SYMBOL_TABLE system_st;  /* System symbols (Instructions,
                                   pseudo-ops, registers) */

extern SYMBOL_TABLE section_st; /* Program sections */

extern SYMBOL_TABLE symbol_st;  /* User symbols */

extern SYMBOL_TABLE macro_st;   /* Macros */

extern SYMBOL_TABLE implicit_st;        /* The symbols which may be implicit globals */

#endif

int             hash_name(
    char *label);

SYMBOL         *add_sym(
    char *label,
    unsigned value,
    unsigned flags,
    SECTION *section,
    SYMBOL_TABLE *table);
SYMBOL         *first_sym(
    SYMBOL_TABLE *table,
    SYMBOL_ITER *iter);

SYMBOL         *lookup_sym(
    char *label,
    SYMBOL_TABLE *table);
SYMBOL         *next_sym(
    SYMBOL_TABLE *table,
    SYMBOL_ITER *iter);
void            free_sym(
    SYMBOL *sym);

void            remove_sym(
    SYMBOL *sym,
    SYMBOL_TABLE *table);

char           *symflags(
    SYMBOL *sym);

void            add_table(
    SYMBOL *sym,
    SYMBOL_TABLE *table);


void            add_symbols(
    SECTION *current_section);

#endif
