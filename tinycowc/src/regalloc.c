#include "globals.h"
#include "regalloc.h"

/* This is a very simple first-come-first-served allocator which keeps values
 * on a stack, with the most recently used ones cached in a register. Spilling
 * happens by pushing onto the spill stack (the physical stack). The sstack
 * always mirrors the pstack (which is controlled by the code generator and
 * therefore doesn't match the vstack).
 * 
 * In essence:
 * 
 * (top of pstack)
 *   val1           on sstack
 *   val2           on sstack
 *   val3  <- fp    on sstack
 *   val4           in register
 *   val5  <- sp    in register
 * 
 * Spilling and, er, unspilling always happens by moving fp up and down,
 * enforcing the order of values in the sstack.
 * 
 * In addition, and this is orthogonal to the main register allocator, the
 * code generator remembers what value is stored in what register. Trying to
 * access the same (trivial) value with regalloc_load_const() and regalloc_load_var()
 * will attempt to find a register which already has that value. This may result in
 * the same register appearing more than once in the pstack if the same constant
 * is pushed more than once.
 * 
 * Two sets of registers are maintained:
 * 
 * - locked registers are ones which the current pattern is using right now.
 *   These may not be allocated under any circumstances.
 * 
 * - used registers are values which contain a value. They may be spilt to the
 *   sstack and reused if necessary.
 */

typedef enum
{
    VALUE_NONE = 0,
    VALUE_CONST,
    VALUE_VAR
}
value_kind_t;

struct value
{
    value_kind_t kind;
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
static reg_t used = 0;

#define MAX_VALUES 32
static struct value values[MAX_VALUES];

#define MAX_PSTACK 32
static reg_t pstack[MAX_PSTACK];
static int psp = 0;
static int pfp = 0;

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
    arch_emit_comment("allocating register for 0x%x", mask);

    /* Find a completely unused register. */

    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if ((reg->id & mask) && !(reg->interference & (used|locked)))
        {
			locked |= reg->id;
            arch_emit_comment("found unused register 0x%x", reg->id);
            return reg->id;
        }
    }

    /* Find a used but unlocked register. */

    for (unsigned i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if ((reg->id & mask) && !(reg->interference & locked))
        {
            arch_emit_comment("found used but unlocked register 0x%x", reg->id);
            regalloc_reg_changing(reg->interference);
			locked |= reg->id;
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
            assert((locked & reg->id) == 0);
			locked |= reg->id;
        }
    }
}

void regalloc_unlock(reg_t mask)
{
    locked &= ~mask;
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
        if (!(locked & found))
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
        val->kind = VALUE_CONST;
        val->u.num = num;
    }
    val->reg |= id;
    used |= id;
}

void regalloc_reg_contains_var(reg_t id, struct symbol* sym, int32_t off)
{
    struct value* val = findvarvalue(sym, off);
    if (!val)
    {
        val = findemptyvalue();
        val->kind = VALUE_VAR;
        val->u.var.sym = sym;
        val->u.var.off = off;
    }
    val->reg |= id;
    used |= id;
}

void regalloc_push(reg_t id)
{
    if (psp == MAX_PSTACK)
        fatal("pstack overflow");

    arch_emit_comment("pstack push 0x%x", id);
    pstack[psp++] = id;
    used |= id;
}

reg_t regalloc_pop(reg_t mask)
{
    if (psp == 0)
        fatal("pstack underflow");

    reg_t found;
    if (pfp == psp)
    {
        found = regalloc_alloc(mask);
        arch_pop(found);
        arch_emit_comment("pop from sstack into 0x%x", found);
        psp--;
        pfp--;
    }
    else
    {
        found = pstack[--psp];
        arch_emit_comment("pstack value already in register 0x%x", found);
        if (!(found & mask))
        {
            arch_emit_comment("required register is 0x%x, copying", mask);
            reg_t real = regalloc_alloc(mask);
            arch_copy(found, real);
            found = real;
        }
        locked |= found;
    }
    return found;
}

void regalloc_flush_stack(void)
{
    while (pfp != psp)
    {
        reg_t reg = pstack[pfp++];
        arch_push(reg);
    }
}

void regalloc_drop_stack_items(int n)
{
    while (n--)
    {
        if (psp == 0)
            fatal("stack underflow");

        if (pfp == psp)
        {
            pfp--;
            psp--;
        }
        else
        {
            reg_t reg = pstack[--psp];
            used &= ~reg;
        }
    }
}

/* Discard the contents of the supplied register. */
static void flush_values_in_reg(reg_t mask)
{
    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        if (val->kind)
        {
            used &= ~(val->reg & mask);
            val->reg &= ~mask;
            if (!val->reg)
                val->kind = VALUE_NONE;
        }
    }
}

void regalloc_reg_changing(reg_t mask)
{
    /* Work backwards in the pstack, making sure that any conflicting
     * registers are saved somewhere. */
    for (int i=psp-1; i>=pfp; i--)
    {
        reg_t reg = pstack[i];
        if (reg & mask)
        {
            /* Give the backend a chance to save it to another register. */
            reg_t dest = arch_save(reg, mask | locked | used);

            if (dest)
            {
                /* The backend found somewhere. */
                arch_emit_comment("saved 0x%x in 0x%x", reg, dest);
                pstack[i] = dest;

                /* Patch any values to point to the new location. */
                flush_values_in_reg(dest);
                for (int i=0; i<MAX_VALUES; i++)
                {
                    struct value* val = &values[i];
                    if (val->kind)
                    {
                        if (val->reg & reg)
                        {
                            val->reg &= ~reg;
                            val->reg |= dest;
                        }
                    }
                }
            }
            else
            {
                /* Nope, the backend couldn't find anything, so we need to
                 * flush this register to the physical stack. Remember that
                 * the physical stack must maintain the pstack ordering so
                 * we also need to flush any registers further up the stack
                 * than it. */
                while (pfp <= i)
                {
                    reg_t reg = pstack[pfp++];
                    arch_emit_comment("spilling 0x%x", reg);
                    arch_push(reg);
                    flush_values_in_reg(reg);
                }
            }
        }
    }
    flush_values_in_reg(mask);
}

void regalloc_var_changing(struct symbol* sym, int32_t off)
{
    struct value* val = findvarvalue(sym, off);
    if (val)
    {
        if (val->reg & locked)
            fatal("regalloc_var_changing on locked register");

        val->kind = VALUE_NONE;
        used &= ~val->reg;
    }
}

void regalloc_dump(void)
{
    for (int i=0; i<num_regs; i++)
    {
        struct reg* reg = &regs[i];
        if (reg->id & (used|locked))
            arch_emit_comment("reg %s: %s %s",
                reg->name,
                (reg->id & used) ? "used" : "",
                (reg->id & locked) ? "locked" : "");
    }

    for (int i=pfp; i<psp; i++)
        arch_emit_comment("stack +%d: %s", i, regname(pstack[i]));

    for (int i=0; i<MAX_VALUES; i++)
    {
        struct value* val = &values[i];
        switch (val->kind)
        {
            case VALUE_CONST:
                arch_emit_comment("value #%d = const 0x%x in 0x%x",
                    i, val->u.num, val->reg);
                break;

            case VALUE_VAR:
                arch_emit_comment("value #%d = sym %s+0x%x in 0x%x",
                    i, val->u.var.sym->name, val->u.var.sym->u.var.offset + val->u.var.off,
                    val->reg);
                break;
        }
    }
    arch_emit_comment("");
}
