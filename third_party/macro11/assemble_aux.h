
#ifndef ASSEMBLE_AUX__H
#define ASSEMBLE_AUX__H

#include "stream2.h"
#include "object.h"
#include "extree.h"

#define NO_REG 0777


typedef struct addr_mode {
    unsigned        type;       /* The bits that represent the addressing mode */
    /* bits 0:2 are register number */
    /* bit 3 is indirect */
    /* bits 4:6 are mode, where 0=Rn, 1=(Rn)+,
       2=-(Rn), 3=offset(Rn) */
    int             rel;        /* the addressing mode is PC-relative */
    EX_TREE        *offset;     /* Expression giving the offset */
} ADDR_MODE;

void            push_cond(
    int ok,
    STREAM *str);
void            pop_cond(
    int to);

int             express_sym_offset(
    EX_TREE *value,
    SYMBOL **sym,
    unsigned *offset);

void            change_dot(
    TEXT_RLD *tr,
    int size);

int             store_word(
    STREAM *str,
    TEXT_RLD *tr,
    int size,
    unsigned word);
int             store_limits(
    STREAM *str,
    TEXT_RLD *tr);
void            store_value(
    STACK *stack,
    TEXT_RLD *tr,
    int size,
    EX_TREE *value);

int             do_word(
    STACK *stack,
    TEXT_RLD *tr,
    char *cp,
    int size);

SECTION        *new_section(
    void);
void            go_section(
    TEXT_RLD *tr,
    SECTION *sect);

void            free_addr_mode(
    ADDR_MODE *mode);

int             eval_defined(
    EX_TREE *value);
int             eval_undefined(
    EX_TREE *value);


void            mode_extension(
    TEXT_RLD *tr,
    ADDR_MODE *mode,
    STREAM *str);
int             check_branch(
    STACK *stack,
    unsigned offset,
    int min,
    int max);
unsigned        get_register(
    EX_TREE *expr);

void            write_globals(
    FILE *obj);
void            migrate_implicit(
    void);



#endif
