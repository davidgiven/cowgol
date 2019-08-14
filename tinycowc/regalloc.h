#ifndef REGALLOC_H
#define REGALLOC_H

typedef uint32_t reg_t;
#define ALL_REGS UINT_MAX

extern void arch_load_const(reg_t id, int32_t offset);
extern void arch_load_var(reg_t id, struct symbol* sym, int32_t off);
extern void arch_push(reg_t id);
extern void arch_pop(reg_t id);
extern void arch_copy(reg_t src, reg_t dest);

extern void regalloc_add_register(const char* name, reg_t id, reg_t interference);
extern const char* regname(reg_t id);

extern void regalloc_write_back(reg_t mask);
extern void regalloc_discard(reg_t mask);

extern reg_t regalloc_alloc(reg_t mask);
extern void regalloc_unlock(reg_t mask);

extern reg_t regalloc_load_const(reg_t mask, int32_t value);
extern reg_t regalloc_load_var(reg_t mask, struct symbol* sym, int32_t offset);

extern void regalloc_reg_contains_const(reg_t id, int32_t value);
extern void regalloc_reg_contains_var(reg_t id, struct symbol* sym, int32_t offset);

extern void regalloc_reg_changing(reg_t mask);
extern void regalloc_var_changing(struct symbol* sym, int32_t offset);

extern void regalloc_push(reg_t id);
extern reg_t regalloc_pop(reg_t mask);

extern void regalloc_dump(void);

#endif
