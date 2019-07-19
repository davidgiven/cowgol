#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include "globals.h"

void arch_file_prologue(void)
{
    fatal(__FUNCTION__);
}

void arch_file_epilogue(void)
{
    fatal(__FUNCTION__);
}

void arch_subroutine_prologue(void)
{
    fatal(__FUNCTION__);
}

void arch_subroutine_epilogue(void)
{
    fatal(__FUNCTION__);
}

void arch_emit_label(int label)
{
    fatal(__FUNCTION__);
}

void arch_label_alias(int fakelabel, int reallabel)
{
    fatal(__FUNCTION__);
}

void arch_emit_jump(int label)
{
    fatal(__FUNCTION__);
}

void arch_push_input_param(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_emit_call(struct subroutine* sub)
{
    fatal(__FUNCTION__);
}

void arch_push_constant(struct symbol* sym, int32_t off)
{
    fatal(__FUNCTION__);
}

void arch_push_string_constant(const char* text)
{
    fatal(__FUNCTION__);
}

void arch_push_value(struct symbol* sym, int32_t off)
{
    fatal(__FUNCTION__);
}

void arch_dereference(struct symbol* ptrtype)
{
    fatal(__FUNCTION__);
}

void arch_add_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    fatal(__FUNCTION__);
}

void arch_add(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_subfrom_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    fatal(__FUNCTION__);
}

void arch_sub(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_mul_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_mul(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_div_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_div_const_by(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_div(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_rem_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_rem_const_by(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_rem(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_logicop_const(struct symbol* type, int32_t value, int logicop)
{
    fatal(__FUNCTION__);
}

void arch_logicop(struct symbol* type, int logicop)
{
    fatal(__FUNCTION__);
}

void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_lessthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_cmp_lessthan(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_greaterthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_cmp_greaterthan(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_assign_var(struct symbol* type, struct symbol* var, int32_t offset)
{
    fatal(__FUNCTION__);
}

void arch_assign_ptr(struct symbol* ptrtype)
{
    fatal(__FUNCTION__);
}

void arch_asm_start(void)
{
    fatal(__FUNCTION__);
}

void arch_asm_string(const char* s)
{
    fatal(__FUNCTION__);
}

void arch_asm_symbol(struct symbol* sym)
{
    fatal(__FUNCTION__);
}

void arch_asm_end(void)
{
    fatal(__FUNCTION__);
}
