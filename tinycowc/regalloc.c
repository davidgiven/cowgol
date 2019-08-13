#include "globals.h"
#include "regalloc.h"

enum
{
    VALUE_NONE = 0,
    VALUE_CONST,
    VALUE_VAR
};

struct value
{
    int kind;
    reg_t reg;
    union
    {
        int32_t num;
        struct
        {
            struct symbol* sym;
            int32_t off;
        }
        var;
    }
    u;
};

struct reg
{
    const char* name;
    reg_t id;
    reg_t interference;
};

#define MAX_REGS 32
static struct reg regs[MAX_REGS];
static int num_regs = 0;
static reg_t locked = 0;

#define MAX_VALUES 32
static struct value values[MAX_VALUES];

void regalloc_add_register(const char* name, reg_t id, reg_t interference)
{
    if (num_regs == MAX_REGS)
        fatal("too many registers");

    struct reg* reg = &regs[num_regs++];
    reg->name = name;
    reg->id = id;
    reg->interference = interference;
}

const char* regname(reg_t id)
{
    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if (reg->id == id)
            return reg->name;
    }

    fatal("cannot get register name for 0x%x", id);
    return NULL;
}


reg_t regalloc_alloc(reg_t mask)
{
    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if ((reg->id & mask) && !(reg->interference & locked))
        {
            regalloc_reg_changing(reg->interference);
			locked |= reg->interference;
            return reg->id;
        }
    }

    fatal("unable to allocate register 0x%x", mask);
}

static void regalloc_lock(reg_t mask)
{
    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if (reg->id & mask)
        {
            assert((locked & reg->interference) == 0);
			locked |= reg->interference;
        }
    }
}

void regalloc_unlock(reg_t mask)
{
    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if (reg->id & mask)
			locked &= ~reg->interference;
    }
}

void regalloc_free(reg_t mask)
{
    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if (reg->id & mask)
			locked &= ~reg->interference;
    }
}

static reg_t findfirstreg(reg_t mask)
{
    reg_t i = 1;
    while (i)
    {
        if (mask & i)
            return i;
        i <<= 1;
    }
    return 0;
}

static struct value* findemptyvalue(void)
{
    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        if (!val->kind)
        {
            val->reg = 0;
            return val;
        }
    }
    fatal("value buffer full");
}

static struct value* findconstvalue(int32_t num)
{
    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        if ((val->kind == VALUE_CONST) && (val->u.num == num))
            return val;
    }
    return NULL;
}

static struct value* findvarvalue(struct symbol* sym, int32_t off)
{
    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        if ((val->kind == VALUE_VAR) && (val->u.var.sym == sym) && (val->u.var.off == off))
            return val;
    }
    return NULL;
}

reg_t regalloc_load_const(reg_t mask, int32_t num)
{
    struct value* val = findconstvalue(num);
    if (val && (val->reg & mask))
    {
        reg_t found = findfirstreg(val->reg & mask);
        regalloc_lock(found);
        return found;
    }

    reg_t found = regalloc_alloc(mask);
    arch_load_const(found, num);
    regalloc_reg_contains_const(found, num);
    return found;
}

reg_t regalloc_load_var(reg_t mask, struct symbol* sym, int32_t off)
{
    struct value* val = findvarvalue(sym, off);
    if (val && (val->reg & mask))
    {
        reg_t found = findfirstreg(val->reg & mask);
        regalloc_lock(found);
        return found;
    }

    reg_t found = regalloc_alloc(mask);
    arch_load_var(found, sym, off);
    regalloc_reg_contains_var(found, sym, off);
    return found;
}

void regalloc_reg_contains_const(reg_t id, int32_t num)
{
    struct value* val = findconstvalue(num);
    if (!val)
    {
        val = findemptyvalue();
        val->kind = VALUE_VAR;
        val->u.num = num;
    }
    val->reg |= id;
}

void regalloc_reg_contains_var(reg_t id, struct symbol* sym, int32_t off)
{
    struct value* val = findvarvalue(sym, off);
    if (!val)
    {
        val = findemptyvalue();
        val->kind = VALUE_CONST;
        val->u.var.sym = sym;
        val->u.var.off = off;
    }
    val->reg |= id;
}

void regalloc_reg_changing(reg_t mask)
{
    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        if (val->kind)
        {
            if (val->reg & locked)
                fatal("regalloc_reg_changing on locked register");

            val->reg &= ~mask;
            if (!val->reg)
                val->kind = VALUE_NONE;
        }
    }
}

void regalloc_var_changing(struct symbol* sym, int32_t off)
{
    struct value* val = findvarvalue(sym, off);
    if (val)
    {
        if (val->reg & locked)
            fatal("regalloc_var_changing on locked register");

        val->kind = VALUE_NONE;
    }
}
