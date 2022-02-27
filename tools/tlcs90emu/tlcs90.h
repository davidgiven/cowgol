#ifndef TLCS90_H
#define TLCS90_H

/* Registers */

enum
{
    REG_B = 0,
    REG_C = 1,
    REG_D = 2,
    REG_E = 3,
    REG_H = 4,
    REG_L = 5,
    REG_A = 6,

    REG_BC = 0,
    REG_DE = 1,
    REG_HL = 2,
    REG_IX = 4,
    REG_IY = 5,
    REG_SP = 6,

    REG_AF = 7,
    REG_AF2 = 8,
    REG_PC = 9,
};

extern uint8_t RM8(uint32_t a);
extern void WM8(uint32_t a, uint8_t v);

extern uint16_t r8(const uint16_t r);
extern void w8(const uint16_t r, uint16_t value);
extern uint16_t r16(const uint16_t r);
extern void w16(const uint16_t r, uint16_t value);

extern void tlcs90_init(void);
extern void tlcs90_step(void);

#endif

