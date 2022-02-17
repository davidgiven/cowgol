#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <endian.h>
#include "globals.h"
#include "tlcs90.h"

/* This emulator library is based on Luca Elia's emulator from MAME, in turn
 * based on the Z80 emulator by Juergen Buchmueller. It's BSD-3-clause licensed.
 */

uint8_t ram[0x10000];

static uint32_t m_addr;
static uint8_t m_op;

static uint8_t m_mode1;
static uint16_t m_r1, m_r1b;

static uint8_t m_mode2;
static uint16_t m_r2, m_r2b;

static int m_cyc_t, m_cyc_f;
static uint8_t m_after_EI;
static uint16_t m_irq_state, m_irq_mask;

union pair_t
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    struct
    {
        uint8_t l, h;
    } b;
#elif __BYTE_ORDER == __BIG_ENDIAN
    struct
    {
        uint8_t h, l;
    } b;
#else
#error Inconsistent endianness?
#endif
    uint16_t w;
};

static union pair_t m_prvpc, m_pc, m_sp, m_af, m_bc, m_de, m_hl, m_ix, m_iy;
static union pair_t m_af2, m_bc2, m_de2, m_hl2;

static uint32_t m_ixbase, m_iybase;

enum
{
    E_NONE,
    E_BIT8,
    E_CC,
    E_I8,
    E_D8,
    E_R8,
    E_I16,
    E_D16,
    E_R16,
    E_MI16,
    E_MR16,
    E_MR16D8,
    E_MR16R8,
    E_R16D8,
    E_R16R8
};

enum
{
    UNKNOWN,
    NOP,
    EX,
    EXX,
    LD,
    LDW,
    LDA,
    LDI,
    LDIR,
    LDD,
    LDDR,
    CPI,
    CPIR,
    CPD,
    CPDR,
    PUSH,
    POP,
    JP,
    JR,
    CALL,
    CALLR,
    RET,
    RETI,
    HALT,
    DI,
    EI,
    SWI,
    DAA,
    CPL,
    NEG,
    LDAR,
    RCF,
    SCF,
    CCF,
    TSET,
    BIT,
    SET,
    RES,
    INC,
    DEC,
    INCX,
    DECX,
    INCW,
    DECW,
    ADD,
    ADC,
    SUB,
    SBC,
    AND,
    XOR,
    OR,
    CP,
    RLC,
    RRC,
    RL,
    RR,
    SLA,
    SRA,
    SLL,
    SRL,
    RLD,
    RRD,
    DJNZ,
    MUL,
    DIV
};

enum
{
    INTSWI = 0,
    INTNMI,
    INTWD,
    INT0,
    INTT0,
    INTT1,
    INTT2,
    INTT3,
    INTT4,
    INT1,
    INTT5,
    INT2,
    INTRX,
    INTTX,
    INTMAX
};

#define F m_af.b.l

/* Condition Codes */

#define FLS 0x0
#define LT 0x1
#define LE 0x2
#define ULE 0x3
#define OV 0x4
#define PE 0x4
#define MI 0x5
#define Z 0x6
#define EQ 0x6
#define CR 0x7
#define ULT 0x7
#define T 0x8
#define GE 0x9
#define GT 0xa
#define UGT 0xb
#define NOV 0xc
#define PO 0xc
#define PL 0xd
#define NZ 0xe
#define NE 0xe
#define NC 0xf
#define UGE 0xf

#define CF 0x01
#define NF 0x02
#define PF 0x04
#define VF PF
#define XCF 0x08
#define HF 0x10
#define IF 0x20
#define ZF 0x40
#define SF 0x80

static uint8_t SZ[256];     /* zero and sign flags */
static uint8_t SZ_BIT[256]; /* zero, sign and parity/overflow (=zero) flags for
                               BIT opcode */
static uint8_t SZP[256];    /* zero, sign and parity flags */
static uint8_t
    SZHV_inc[256]; /* zero, sign, half carry and overflow flags INC r8 */
static uint8_t
    SZHV_dec[256]; /* zero, sign, half carry and overflow flags DEC r8 */

// Opcodes

#define OP_16 0x80

#define OP(X, CT) \
    m_op = X;     \
    m_cyc_t = (CT * 2);
#define OP16(X, CT) OP((X) | OP_16, CT)

#define OPCC(X, CF, CT) OP(X, CT) m_cyc_f = (CF * 2);
#define OPCC16(X, CF, CT) OPCC((X) | OP_16, CF, CT)

#define BIT8(N, I)      \
    m_mode##N = E_BIT8; \
    m_r##N = I;
#define I8(N, I)      \
    m_mode##N = E_I8; \
    m_r##N = I;
#define D8(N, I)      \
    m_mode##N = E_D8; \
    m_r##N = I;
#define I16(N, I)      \
    m_mode##N = E_I16; \
    m_r##N = I;
#define D16(N, I)      \
    m_mode##N = E_D16; \
    m_r##N = I;
#define R8(N, R)      \
    m_mode##N = E_R8; \
    m_r##N = R;
#define R16(N, R)      \
    m_mode##N = E_R16; \
    m_r##N = R;
#define Q16(N, R)      \
    m_mode##N = E_R16; \
    m_r##N = R;        \
    if (m_r##N == REG_SP)  \
        m_r##N = REG_AF;
#define MI16(N, I)      \
    m_mode##N = E_MI16; \
    m_r##N = I;
#define MR16(N, R)      \
    m_mode##N = E_MR16; \
    m_r##N = R;
#define MR16D8(N, R, I)   \
    m_mode##N = E_MR16D8; \
    m_r##N = R;           \
    m_r##N##b = I;
#define MR16R8(N, R, g)   \
    m_mode##N = E_MR16R8; \
    m_r##N = R;           \
    m_r##N##b = g;
#define NONE(N) m_mode##N = E_NONE;
#define CC(N, cc)     \
    m_mode##N = E_CC; \
    m_r##N = cc;
#define R16D8(N, R, I)   \
    m_mode##N = E_R16D8; \
    m_r##N = R;          \
    m_r##N##b = I;
#define R16R8(N, R, g)   \
    m_mode##N = E_R16R8; \
    m_r##N = R;          \
    m_r##N##b = g;

static uint16_t RM16(uint32_t a)
{
    return RM8(a) | (RM8((a + 1) & 0xffff) << 8);
}

static void WM16(uint32_t a, uint16_t v)
{
    WM8(a, v);
    WM8((a + 1) & 0xffff, v >> 8);
}

static uint8_t RX8(uint32_t a, uint32_t base)
{
    return RM8(base | a);
}

static uint16_t RX16(uint32_t a, uint32_t base)
{
    return RX8(a, base) | (RX8((a + 1) & 0xffff, base) << 8);
}

static void WX8(uint32_t a, uint8_t v, uint32_t base)
{
    WM8(base | a, v);
}

static void WX16(uint32_t a, uint16_t v, uint32_t base)
{
    WX8(a, v, base);
    WX8((a + 1) & 0xffff, v >> 8, base);
}

static uint8_t READ8()
{
    uint8_t b0 = RM8(m_addr++);
    m_addr &= 0xffff;
    return b0;
}
static uint16_t READ16()
{
    uint8_t b0 = READ8();
    return b0 | (READ8() << 8);
}

static void decode()
{
    uint8_t b0, b1, b2, b3;
    uint16_t imm16;

    b0 = READ8();

    switch (b0)
    {
        case 0x00:
            OP(NOP, 2) NONE(1) NONE(2) return; // NOP

        case 0x01:
            OP(HALT, 4) NONE(1) NONE(2) return; // HALT
        case 0x02:
            OP(DI, 2) NONE(1) NONE(2) return; // DI
        case 0x03:
            OP(EI, 2) NONE(1) NONE(2) return; // EI

        case 0x07:
            OPCC(INCX, 6, 10)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // INCX ($FF00+n)

        case 0x08:
            OP(EX, 2) R16(1, REG_DE) R16(2, REG_HL) return; // EX DE,HL
        case 0x09:
            OP(EX, 2) R16(1, REG_AF) R16(2, REG_AF2) return; // EX AF,AF'
        case 0x0a:
            OP(EXX, 2) NONE(1) NONE(2) return; // EXX

        case 0x0b:
            OP(DAA, 4) R8(1, REG_A) NONE(2) return; // DAA A

        case 0x0c:
            OP(RCF, 2) NONE(1) NONE(2) return; // RCF
        case 0x0d:
            OP(SCF, 2) NONE(1) NONE(2) return; // SCF
        case 0x0e:
            OP(CCF, 2) NONE(1) NONE(2) return; // CCF

        case 0x0f:
            OPCC(DECX, 6, 10)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // DECX ($FF00+n)

        case 0x10:
            OP(CPL, 2) R8(1, REG_A) NONE(2) return; // CPL A
        case 0x11:
            OP(NEG, 2) R8(1, REG_A) NONE(2) return; // NEG A

        case 0x12: // MUL HL,n
        case 0x13: // DIV HL,n
            OP(MUL + b0 - 0x12, 16) R16(1, REG_HL) I8(2, READ8()) return;

        case 0x14:
        case 0x15:
        case 0x16:
            OP16(ADD, 6)
            R16(1, REG_IX + b0 - 0x14) I16(2, READ16()) return; // ADD ix,mn

        case 0x17:
            OP(LDAR, 8) R16(1, REG_HL) D16(2, READ16()) return; // LDAR HL,+cd

        case 0x18:
            OP(DJNZ, 10) D8(1, READ8()) NONE(2) return; // DJNZ +d
        case 0x19:
            OP16(DJNZ, 10) R16(1, REG_BC) D8(2, READ8()) return; // DJNZ BC,+d

        case 0x1a:
            OPCC(JP, 8, 8) CC(1, T) I16(2, READ16()) return; // JP T,mn
        case 0x1b:
            OPCC16(JR, 10, 10) CC(1, T) D16(2, READ16()) return; // JR T,+cd

        case 0x1c:
            OPCC(CALL, 14, 14) CC(1, T) I16(2, READ16()) return; // CALL T,mn
        case 0x1d:
            OP(CALLR, 16) D16(1, READ16()) NONE(2) return; // CALLR +cd

        case 0x1e:
            OPCC(RET, 10, 10) CC(1, T) NONE(2) return; // RET T
        case 0x1f:
            OP(RETI, 14) NONE(1) NONE(2) return; // RETI

        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
            OP(LD, 2) R8(1, REG_A) R8(2, b0 - 0x20) return; // LD A,r

        case 0x27:
            OP(LD, 8)
            R8(1, REG_A) MI16(2, 0xFF00 | READ8()) return; // LD A,($FF00+n)

        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
            OP(LD, 2) R8(1, b0 - 0x28) R8(2, REG_A) return; // LD r,A

        case 0x2f:
            OP(LD, 8)
            MI16(1, 0xFF00 | READ8()) R8(2, REG_A) return; // LD ($FF00+n), A

        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
            OP(LD, 4) R8(1, b0 - 0x30) I8(2, READ8()) return; // LD r,n

        case 0x37:
            OP(LD, 10)
            MI16(1, 0xFF00 | READ8()) I8(2, READ8()) return; // LD ($FF00+w),n

        case 0x38:
        case 0x39:
        case 0x3a: /*case 0x3b:*/
        case 0x3c:
        case 0x3d:
        case 0x3e:
            OP16(LD, 6) R16(1, b0 - 0x38) I16(2, READ16()) return; // LD rr,nn

        case 0x3f:
            OP(LDW, 14)
            MI16(1, 0xFF00 | READ8())
            I16(2, READ16()) return; // LDW ($FF00+w),mn

        case 0x40:
        case 0x41:
        case 0x42: /*case 0x43:*/
        case 0x44:
        case 0x45:
        case 0x46:
            OP16(LD, 4) R16(1, REG_HL) R16(2, b0 - 0x40) return; // LD HL,rr

        case 0x47:
            OP16(LD, 10)
            R16(1, REG_HL) MI16(2, 0xFF00 | READ8()) return; // LD HL,($FF00+n)

        case 0x48:
        case 0x49:
        case 0x4a: /*case 0x4b:*/
        case 0x4c:
        case 0x4d:
        case 0x4e:
            OP16(LD, 4) R16(1, b0 - 0x48) R16(2, REG_HL) return; // LD rr,HL

        case 0x4f:
            OP16(LD, 10)
            MI16(1, 0xFF00 | READ8()) R16(2, REG_HL) return; // LD ($FF00+n), HL

        case 0x50:
        case 0x51:
        case 0x52: /*case 0x53:*/
        case 0x54:
        case 0x55:
        case 0x56:
            OP(PUSH, 8) Q16(1, b0 - 0x50) NONE(2) return; // PUSH qq
        case 0x58:
        case 0x59:
        case 0x5a: /*case 0x5b:*/
        case 0x5c:
        case 0x5d:
        case 0x5e:
            OP(POP, 10) Q16(1, b0 - 0x58) NONE(2) return; // POP qq

        case 0x60: // ADD A,($FF00+n)
        case 0x61: // ADC A,($FF00+n)
        case 0x62: // SUB A,($FF00+n)
        case 0x63: // SBC A,($FF00+n)
        case 0x64: // AND A,($FF00+n)
        case 0x65: // XOR A,($FF00+n)
        case 0x66: // OR  A,($FF00+n)
        case 0x67: // CP  A,($FF00+n)
            OP(ADD + b0 - 0x60, 8) R8(1, REG_A) MI16(2, 0xFF00 | READ8()) return;

        case 0x68: // ADD A,n
        case 0x69: // ADC A,n
        case 0x6a: // SUB A,n
        case 0x6b: // SBC A,n
        case 0x6c: // AND A,n
        case 0x6d: // XOR A,n
        case 0x6e: // OR  A,n
        case 0x6f: // CP  A,n
            OP(ADD + b0 - 0x68, 4) R8(1, REG_A) I8(2, READ8()) return;

        case 0x70: // ADD HL,($FF00+n)
        case 0x71: // ADC HL,($FF00+n)
        case 0x72: // SUB HL,($FF00+n)
        case 0x73: // SBC HL,($FF00+n)
        case 0x74: // AND HL,($FF00+n)
        case 0x75: // XOR HL,($FF00+n)
        case 0x76: // OR  HL,($FF00+n)
        case 0x77: // CP  HL,($FF00+n)
            OP16(ADD + b0 - 0x70, 10)
            R16(1, REG_HL) MI16(2, 0xFF00 | READ8()) return;

        case 0x78: // ADD HL,mn
        case 0x79: // ADC HL,mn
        case 0x7a: // SUB HL,mn
        case 0x7b: // SBC HL,mn
        case 0x7c: // AND HL,mn
        case 0x7d: // XOR HL,mn
        case 0x7e: // OR  HL,mn
        case 0x7f: // CP  HL,mn
            OP16(ADD + b0 - 0x78, 6) R16(1, REG_HL) I16(2, READ16()) return;

        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
            OP(INC, 2) R8(1, b0 - 0x80) NONE(2) return; // INC r
        case 0x87:
            OP(INC, 10)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // INC ($FF00+n)

        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
            OP(DEC, 2) R8(1, b0 - 0x88) NONE(2) return; // DEC r
        case 0x8f:
            OP(DEC, 10)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // DEC ($FF00+n)

        case 0x90:
        case 0x91:
        case 0x92: /*case 0x93:*/
        case 0x94:
        case 0x95:
        case 0x96:
            OP16(INC, 4) R16(1, b0 - 0x90) NONE(2) return; // INC rr
        case 0x97:
            OP(INCW, 14)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // INCW ($FF00+n)
        case 0x98:
        case 0x99:
        case 0x9a: /*case 0x9b:*/
        case 0x9c:
        case 0x9d:
        case 0x9e:
            OP16(DEC, 4) R16(1, b0 - 0x98) NONE(2) return; // DEC rr
        case 0x9f:
            OP(DECW, 14)
            MI16(1, 0xFF00 | READ8()) NONE(2) return; // DECW ($FF00+n)

        case 0xa0: // RLC A
        case 0xa1: // RRC A
        case 0xa2: // RL  A
        case 0xa3: // RR  A
        case 0xa4: // SLA A
        case 0xa5: // SRA A
        case 0xa6: // SLL A
        case 0xa7: // SRL A
            OP(RLC + b0 - 0xa0, 2) R8(1, REG_A) NONE(2) return;

        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xaf:
            OP(BIT, 8)
            BIT8(1, b0 - 0xa8)
            MI16(2, 0xFF00 | READ8()) return; // BIT b,($FF00+n)
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb3:
        case 0xb4:
        case 0xb5:
        case 0xb6:
        case 0xb7:
            OP(RES, 12)
            BIT8(1, b0 - 0xb0)
            MI16(2, 0xFF00 | READ8()) return; // RES b,($FF00+n)
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xbd:
        case 0xbe:
        case 0xbf:
            OP(SET, 12)
            BIT8(1, b0 - 0xb8)
            MI16(2, 0xFF00 | READ8()) return; // SET b,($FF00+n)

        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 0xc7:
        case 0xc8:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
            OPCC(JR, 4, 8) CC(1, b0 - 0xc0) D8(2, READ8()) return; // JR cc,+d

        case 0xe0:
        case 0xe1:
        case 0xe2: /*case 0xe3:*/
        case 0xe4:
        case 0xe5:
        case 0xe6:
            b1 = READ8();
            switch (b1)
            {
                case 0x10: // RLD (gg)
                case 0x11: // RRD (gg)
                    OP(RLD + b1 - 0x10, 12) MR16(1, b0 - 0xe0) NONE(2) return;

                case 0x12: // MUL HL,(gg)
                case 0x13: // DIV HL,(gg)
                    OP(MUL + b1 - 0x12, 18)
                    R16(1, REG_HL) MR16(2, b0 - 0xe0) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 8)
                    R16(1, REG_IX + b1 - 0x14)
                    MR16(2, b0 - 0xe0) return; // ADD ix,(gg)

                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                    OP(LD, 6)
                    R8(1, b1 - 0x28) MR16(2, b0 - 0xe0) return; // LD r,(gg)
                case 0x48:
                case 0x49:
                case 0x4a: /*case 0x4b:*/
                case 0x4c:
                case 0x4d:
                case 0x4e:
                    OP16(LD, 8)
                    R16(1, b1 - 0x48) MR16(2, b0 - 0xe0) return; // LD rr,(gg)

                case 0x50:
                case 0x51:
                case 0x52: /*case 0x53:*/
                case 0x54:
                case 0x55:
                case 0x56:
                    OP(EX, 14)
                    MR16(1, b0 - 0xe0) R16(2, b1 - 0x50) return; // EX (gg),rr

                case 0x60: // ADD A,(gg)
                case 0x61: // ADC A,(gg)
                case 0x62: // SUB A,(gg)
                case 0x63: // SBC A,(gg)
                case 0x64: // AND A,(gg)
                case 0x65: // XOR A,(gg)
                case 0x66: // OR  A,(gg)
                case 0x67: // CP  A,(gg)
                    OP(ADD + b1 - 0x60, 6) R8(1, REG_A) MR16(2, b0 - 0xe0) return;

                case 0x70: // ADD HL,(gg)
                case 0x71: // ADC HL,(gg)
                case 0x72: // SUB HL,(gg)
                case 0x73: // SBC HL,(gg)
                case 0x74: // AND HL,(gg)
                case 0x75: // XOR HL,(gg)
                case 0x76: // OR  HL,(gg)
                case 0x77: // CP  HL,(gg)
                    OP16(ADD + b1 - 0x70, 8)
                    R16(1, REG_HL) MR16(2, b0 - 0xe0) return;

                case 0x87:
                    OP(INC, 8) MR16(1, b0 - 0xe0) NONE(2) return; // INC (gg)
                case 0x8f:
                    OP(DEC, 8) MR16(1, b0 - 0xe0) NONE(2) return; // DEC (gg)

                case 0x97:
                    OP(INCW, 12) MR16(1, b0 - 0xe0) NONE(2) return; // INCW (gg)
                case 0x9f:
                    OP(DECW, 12) MR16(1, b0 - 0xe0) NONE(2) return; // DECW (gg)

                case 0xa0: // RLC (gg)
                case 0xa1: // RRC (gg)
                case 0xa2: // RL  (gg)
                case 0xa3: // RR  (gg)
                case 0xa4: // SLA (gg)
                case 0xa5: // SRA (gg)
                case 0xa6: // SLL (gg)
                case 0xa7: // SRL (gg)
                    OP(RLC + b1 - 0xa0, 8) MR16(1, b0 - 0xe0) NONE(2) return;

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 12)
                    BIT8(1, b1 - 0x18) MR16(2, b0 - 0xe0) return; // TSET b,(gg)
                case 0xa8:
                case 0xa9:
                case 0xaa:
                case 0xab:
                case 0xac:
                case 0xad:
                case 0xae:
                case 0xaf:
                    OP(BIT, 6)
                    BIT8(1, b1 - 0xa8) MR16(2, b0 - 0xe0) return; // BIT b,(gg)
                case 0xb0:
                case 0xb1:
                case 0xb2:
                case 0xb3:
                case 0xb4:
                case 0xb5:
                case 0xb6:
                case 0xb7:
                    OP(RES, 10)
                    BIT8(1, b1 - 0xb0) MR16(2, b0 - 0xe0) return; // RES b,(gg)
                case 0xb8:
                case 0xb9:
                case 0xba:
                case 0xbb:
                case 0xbc:
                case 0xbd:
                case 0xbe:
                case 0xbf:
                    OP(SET, 10)
                    BIT8(1, b1 - 0xb8) MR16(2, b0 - 0xe0) return; // SET b,(gg)
            }
            break;
        case 0xe3:
            imm16 = READ16();
            b3 = READ8();
            switch (b3)
            {
                case 0x10: // RLD (mn)
                case 0x11: // RRD (mn)
                    OP(RLD + b3 - 0x10, 16) MI16(1, imm16) NONE(2) return;

                case 0x12: // MUL HL,(mn)
                case 0x13: // DIV HL,(mn)
                    OP(MUL + b3 - 0x12, 22) R16(1, REG_HL) MI16(2, imm16) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 12)
                    R16(1, REG_IX + b3 - 0x14) MI16(2, imm16) return; // ADD ix,(mn)

                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                    OP(LD, 10)
                    R8(1, b3 - 0x28) MI16(2, imm16) return; // LD r,(mn)
                case 0x48:
                case 0x49:
                case 0x4a: /*case 0x4b:*/
                case 0x4c:
                case 0x4d:
                case 0x4e:
                    OP16(LD, 12)
                    R16(1, b3 - 0x48) MI16(2, imm16) return; // LD rr,(mn)

                case 0x50:
                case 0x51:
                case 0x52: /*case 0x53:*/
                case 0x54:
                case 0x55:
                case 0x56:
                    OP(EX, 18)
                    MI16(1, imm16) R16(2, b3 - 0x50) return; // EX (mn),rr

                case 0x60: // ADD A,(mn)
                case 0x61: // ADC A,(mn)
                case 0x62: // SUB A,(mn)
                case 0x63: // SBC A,(mn)
                case 0x64: // AND A,(mn)
                case 0x65: // XOR A,(mn)
                case 0x66: // OR  A,(mn)
                case 0x67: // CP  A,(mn)
                    OP(ADD + b3 - 0x60, 10) R8(1, REG_A) MI16(2, imm16) return;

                case 0x70: // ADD HL,(mn)
                case 0x71: // ADC HL,(mn)
                case 0x72: // SUB HL,(mn)
                case 0x73: // SBC HL,(mn)
                case 0x74: // AND HL,(mn)
                case 0x75: // XOR HL,(mn)
                case 0x76: // OR  HL,(mn)
                case 0x77: // CP  HL,(mn)
                    OP16(ADD + b3 - 0x70, 12) R16(1, REG_HL) MI16(2, imm16) return;

                case 0x87:
                    OP(INC, 12) MI16(1, imm16) NONE(2) return; // INC (mn)
                case 0x8f:
                    OP(DEC, 12) MI16(1, imm16) NONE(2) return; // DEC (mn)

                case 0x97:
                    OP(INCW, 16) MI16(1, imm16) NONE(2) return; // INCW (mn)
                case 0x9f:
                    OP(DECW, 16) MI16(1, imm16) NONE(2) return; // DECW (mn)

                case 0xa0: // RLC (mn)
                case 0xa1: // RRC (mn)
                case 0xa2: // RL  (mn)
                case 0xa3: // RR  (mn)
                case 0xa4: // SLA (mn)
                case 0xa5: // SRA (mn)
                case 0xa6: // SLL (mn)
                case 0xa7: // SRL (mn)
                    OP(RLC + b3 - 0xa0, 12) MI16(1, imm16) NONE(2) return;

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 16)
                    BIT8(1, b3 - 0x18) MI16(2, imm16) return; // TSET b,(mn)
                case 0xa8:
                case 0xa9:
                case 0xaa:
                case 0xab:
                case 0xac:
                case 0xad:
                case 0xae:
                case 0xaf:
                    OP(BIT, 10)
                    BIT8(1, b3 - 0xa8) MI16(2, imm16) return; // BIT b,(mn)
                case 0xb0:
                case 0xb1:
                case 0xb2:
                case 0xb3:
                case 0xb4:
                case 0xb5:
                case 0xb6:
                case 0xb7:
                    OP(RES, 14)
                    BIT8(1, b3 - 0xb0) MI16(2, imm16) return; // RES b,(mn)
                case 0xb8:
                case 0xb9:
                case 0xba:
                case 0xbb:
                case 0xbc:
                case 0xbd:
                case 0xbe:
                case 0xbf:
                    OP(SET, 14)
                    BIT8(1, b3 - 0xb8) MI16(2, imm16) return; // SET b,(mn)
            }
            break;

        case 0xe7:
            b1 = READ8();
            b2 = READ8();
            switch (b2)
            {
                case 0x10: // RLD ($FF00+n)
                case 0x11: // RRD ($FF00+n)
                    OP(RLD + b2 - 0x10, 14) MI16(1, 0xFF00 | b1) NONE(2) return;

                case 0x12: // MUL HL,($FF00+n)
                case 0x13: // DIV HL,($FF00+n)
                    OP(MUL + b2 - 0x12, 20)
                    R16(1, REG_HL) MI16(2, 0xFF00 | b1) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 10)
                    R16(1, REG_IX + b2 - 0x14)
                    MI16(2, 0xFF00 | b1) return; // ADD ix,($FF00+n)

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 14)
                    BIT8(1, b2 - 0x18)
                    MI16(2, 0xFF00 | b1) return; // TSET b,($FF00+n)
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                    OP(LD, 8)
                    R8(1, b2 - 0x28)
                    MI16(2, 0xFF00 | b1) return; // LD r,($FF00+n)
                case 0x48:
                case 0x49:
                case 0x4a: /*case 0x4b:*/
                case 0x4c:
                case 0x4d:
                case 0x4e:
                    OP16(LD, 10)
                    R16(1, b2 - 0x48)
                    MI16(2, 0xFF00 | b1) return; // LD rr,($FF00+n)

                case 0x50:
                case 0x51:
                case 0x52: /*case 0x53:*/
                case 0x54:
                case 0x55:
                case 0x56:
                    OP(EX, 16)
                    MI16(1, 0xFF00 | b1)
                    R16(2, b2 - 0x50) return; // EX ($FF00+n),rr

                case 0xa0: // RLC ($FF00+n)
                case 0xa1: // RRC ($FF00+n)
                case 0xa2: // RL  ($FF00+n)
                case 0xa3: // RR  ($FF00+n)
                case 0xa4: // SLA ($FF00+n)
                case 0xa5: // SRA ($FF00+n)
                case 0xa6: // SLL ($FF00+n)
                case 0xa7: // SRL ($FF00+n)
                    OP(RLC + b2 - 0xa0, 10) MI16(1, 0xFF00 | b1) NONE(2) return;
            }
            break;

        case 0xe8:
        case 0xe9:
        case 0xea: /*case 0xeb:*/
        case 0xec:
        case 0xed:
        case 0xee:
            b1 = READ8();
            switch (b1)
            {
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                    OP(LD, 6)
                    MR16(1, b0 - 0xe8) R8(2, b1 - 0x20) return; // LD (gg),r
                case 0x37:
                    OP(LD, 8)
                    MR16(1, b0 - 0xe8) I8(2, READ8()) return; // LD (gg),n
                case 0x3f:
                    OP(LDW, 12)
                    MR16(1, b0 - 0xe8) I16(2, READ16()) return; // LDW (gg),mn
                case 0x40:
                case 0x41:
                case 0x42: /*case 0x43:*/
                case 0x44:
                case 0x45:
                case 0x46:
                    OP16(LD, 8)
                    MR16(1, b0 - 0xe8) R16(2, b1 - 0x40) return; // LD (gg),rr

                case 0x68: // ADD (gg),n
                case 0x69: // ADC (gg),n
                case 0x6a: // SUB (gg),n
                case 0x6b: // SBC (gg),n
                case 0x6c: // AND (gg),n
                case 0x6d: // XOR (gg),n
                case 0x6e: // OR  (gg),n
                    OP(ADD + b1 - 0x68, 10)
                    MR16(1, b0 - 0xe8) I8(2, READ8()) return;
                case 0x6f: // CP  (gg),n
                    OP(CP, 8) MR16(1, b0 - 0xe8) I8(2, READ8()) return;

                case 0xc0:
                case 0xc1:
                case 0xc2:
                case 0xc3:
                case 0xc4:
                case 0xc5:
                case 0xc6:
                case 0xc7:
                case 0xc8:
                case 0xc9:
                case 0xca:
                case 0xcb:
                case 0xcc:
                case 0xcd:
                case 0xce:
                case 0xcf:
                    OPCC(JP, 6, 8)
                    CC(1, b1 - 0xc0) R16(2, b0 - 0xe8) return; // JP [cc,]gg
                case 0xd0:
                case 0xd1:
                case 0xd2:
                case 0xd3:
                case 0xd4:
                case 0xd5:
                case 0xd6:
                case 0xd7:
                case 0xd8:
                case 0xd9:
                case 0xda:
                case 0xdb:
                case 0xdc:
                case 0xdd:
                case 0xde:
                case 0xdf:
                    OPCC(CALL, 6, 14)
                    CC(1, b1 - 0xd0) R16(2, b0 - 0xe8) return; // CALL [cc,]gg
            }
            break;
        case 0xeb:
            imm16 = READ16();
            b3 = READ8();
            switch (b3)
            {
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                    OP(LD, 10)
                    MI16(1, imm16) R8(2, b3 - 0x20) return; // LD (mn),r
                case 0x37:
                    OP(LD, 12)
                    MI16(1, imm16) I8(2, READ8()) return; // LD (vw),n
                case 0x3f:
                    OP(LDW, 16)
                    MI16(1, imm16) I16(2, READ16()) return; // LDW (vw),mn
                case 0x40:
                case 0x41:
                case 0x42: /*case 0x43:*/
                case 0x44:
                case 0x45:
                case 0x46:
                    OP16(LD, 12)
                    MI16(1, imm16) R16(2, b3 - 0x40) return; // LD (mn),rr

                case 0x68: // ADD (vw),n
                case 0x69: // ADC (vw),n
                case 0x6a: // SUB (vw),n
                case 0x6b: // SBC (vw),n
                case 0x6c: // AND (vw),n
                case 0x6d: // XOR (vw),n
                case 0x6e: // OR  (vw),n
                    OP(ADD + b3 - 0x68, 14)
                    MI16(1, imm16) I8(2, READ8()) return;
                case 0x6f: // CP  (vw),n
                    OP(ADD + b3 - 0x68, 12)
                    MI16(1, imm16) I8(2, READ8()) return;

                case 0xc0:
                case 0xc1:
                case 0xc2:
                case 0xc3:
                case 0xc4:
                case 0xc5:
                case 0xc6:
                case 0xc7:
                case 0xc8:
                case 0xc9:
                case 0xca:
                case 0xcb:
                case 0xcc:
                case 0xcd:
                case 0xce:
                case 0xcf:
                    OPCC(JP, 10, 12)
                    CC(1, b3 - 0xc0) I16(2, imm16) return; // JP cc,mn
                case 0xd0:
                case 0xd1:
                case 0xd2:
                case 0xd3:
                case 0xd4:
                case 0xd5:
                case 0xd6:
                case 0xd7:
                case 0xd8:
                case 0xd9:
                case 0xda:
                case 0xdb:
                case 0xdc:
                case 0xdd:
                case 0xde:
                case 0xdf:
                    OPCC(CALL, 10, 18)
                    CC(1, b3 - 0xd0) I16(2, imm16) return; // CALL cc,mn
            }
            break;

        case 0xef:
            b1 = READ8();
            b2 = READ8();
            switch (b2)
            {
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                    OP(LD, 8)
                    MI16(1, 0xFF00 | b1)
                    R8(2, b2 - 0x20) return; // LD ($FF00+n),r
                case 0x40:
                case 0x41:
                case 0x42: /*case 0x43:*/
                case 0x44:
                case 0x45:
                case 0x46:
                    OP16(LD, 10)
                    MI16(1, 0xFF00 | b1)
                    R16(2, b2 - 0x40) return; // LD ($FF00+n),rr

                case 0x68: // ADD ($FF00+w),n
                case 0x69: // ADC ($FF00+w),n
                case 0x6a: // SUB ($FF00+w),n
                case 0x6b: // SBC ($FF00+w),n
                case 0x6c: // AND ($FF00+w),n
                case 0x6d: // XOR ($FF00+w),n
                case 0x6e: // OR  ($FF00+w),n
                    OP(ADD + b2 - 0x68, 12)
                    MI16(1, 0xFF00 | b1) I8(2, READ8()) return;
                case 0x6f: // CP  ($FF00+w),n
                    OP(ADD + b2 - 0x68, 10)
                    MI16(1, 0xFF00 | b1) I8(2, READ8()) return;
            }
            break;

        case 0xf0:
        case 0xf1:
        case 0xf2:
            b1 = READ8();
            b2 = READ8();
            switch (b2)
            {
                case 0x10: // RLD (ix+d)
                case 0x11: // RRD (ix+d)
                    OP(RLD + b2 - 0x10, 16)
                    MR16D8(1,REG_IX + b0 - 0xf0, b1) NONE(2) return;

                case 0x12: // MUL HL,(ix+d)
                case 0x13: // DIV HL,(ix+d)
                    OP(MUL + b2 - 0x12, 22)
                    R16(1, REG_HL) MR16D8(2, REG_IX + b0 - 0xf0, b1) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 12)
                    R16(1, REG_IX + b2 - 0x14)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // ADD ix,(jx+d)

                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                    OP(LD, 10)
                    R8(1, b2 - 0x28)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // LD r,(ix+d)
                case 0x48:
                case 0x49:
                case 0x4a: /*case 0x4b:*/
                case 0x4c:
                case 0x4d:
                case 0x4e:
                    OP16(LD, 12)
                    R16(1, b2 - 0x48)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // LD rr,(ix+d)

                case 0x50:
                case 0x51:
                case 0x52: /*case 0x53:*/
                case 0x54:
                case 0x55:
                case 0x56:
                    OP(EX, 18)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1)
                    R16(2, b2 - 0x50) return; // EX (ix+d),rr

                case 0x60: // ADD A,(ix+d)
                case 0x61: // ADC A,(ix+d)
                case 0x62: // SUB A,(ix+d)
                case 0x63: // SBC A,(ix+d)
                case 0x64: // AND A,(ix+d)
                case 0x65: // XOR A,(ix+d)
                case 0x66: // OR  A,(ix+d)
                case 0x67: // CP  A,(ix+d)
                    OP(ADD + b2 - 0x60, 10)
                    R8(1, REG_A) MR16D8(2, REG_IX + b0 - 0xf0, b1) return;

                case 0x70: // ADD HL,(ix+d)
                case 0x71: // ADC HL,(ix+d)
                case 0x72: // SUB HL,(ix+d)
                case 0x73: // SBC HL,(ix+d)
                case 0x74: // AND HL,(ix+d)
                case 0x75: // XOR HL,(ix+d)
                case 0x76: // OR  HL,(ix+d)
                case 0x77: // CP  HL,(ix+d)
                    OP16(ADD + b2 - 0x70, 12)
                    R16(1, REG_HL) MR16D8(2, REG_IX + b0 - 0xf0, b1) return;

                case 0x87:
                    OP(INC, 12)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1) NONE(2) return; // INC (ix+d)
                case 0x8f:
                    OP(DEC, 12)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1) NONE(2) return; // DEC (ix+d)

                case 0x97:
                    OP(INCW, 16)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1) NONE(2) return; // INCW (ix+d)
                case 0x9f:
                    OP(DECW, 16)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1) NONE(2) return; // DECW (ix+d)

                case 0xa0: // RLC (ix+d)
                case 0xa1: // RRC (ix+d)
                case 0xa2: // RL  (ix+d)
                case 0xa3: // RR  (ix+d)
                case 0xa4: // SLA (ix+d)
                case 0xa5: // SRA (ix+d)
                case 0xa6: // SLL (ix+d)
                case 0xa7: // SRL (ix+d)
                    OP(RLC + b2 - 0xa0, 12)
                    MR16D8(1, REG_IX + b0 - 0xf0, b1) NONE(2) return;

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 16)
                    BIT8(1, b2 - 0x18)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // TSET b,(ix+d)
                case 0xa8:
                case 0xa9:
                case 0xaa:
                case 0xab:
                case 0xac:
                case 0xad:
                case 0xae:
                case 0xaf:
                    OP(BIT, 10)
                    BIT8(1, b2 - 0xa8)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // BIT b,(ix+d)
                case 0xb0:
                case 0xb1:
                case 0xb2:
                case 0xb3:
                case 0xb4:
                case 0xb5:
                case 0xb6:
                case 0xb7:
                    OP(RES, 14)
                    BIT8(1, b2 - 0xb0)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // RES b,(ix+d)
                case 0xb8:
                case 0xb9:
                case 0xba:
                case 0xbb:
                case 0xbc:
                case 0xbd:
                case 0xbe:
                case 0xbf:
                    OP(SET, 14)
                    BIT8(1, b2 - 0xb8)
                    MR16D8(2, REG_IX + b0 - 0xf0, b1) return; // SET b,(ix+d)
            }
            break;

        case 0xf3:
            b1 = READ8();
            switch (b1)
            {
                case 0x10: // RLD (HL+A)
                case 0x11: // RRD (HL+A)
                    OP(RLD + b1 - 0x10, 20) MR16R8(1, REG_HL, REG_A) NONE(2) return;

                case 0x12: // MUL HL,(HL+A)
                case 0x13: // DIV HL,(HL+A)
                    OP(MUL + b1 - 0x12, 26) R16(1, REG_HL) MR16R8(2, REG_HL, REG_A) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 16)
                    R16(1, REG_IX + b1 - 0x14)
                    MR16R8(2, REG_HL, REG_A) return; // ADD ix,(HL+A)

                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                    OP(LD, 14)
                    R8(1, b1 - 0x28) MR16R8(2, REG_HL, REG_A) return; // LD r,(HL+A)
                case 0x48:
                case 0x49:
                case 0x4a: /*case 0x4b:*/
                case 0x4c:
                case 0x4d:
                case 0x4e:
                    OP16(LD, 16)
                    R16(1, b1 - 0x48) MR16R8(2, REG_HL, REG_A) return; // LD rr,(HL+A)

                case 0x50:
                case 0x51:
                case 0x52: /*case 0x53:*/
                case 0x54:
                case 0x55:
                case 0x56:
                    OP(EX, 22)
                    MR16R8(1, REG_HL, REG_A) R16(2, b1 - 0x50) return; // EX (HL+A),rr

                case 0x60: // ADD A,(HL+A)
                case 0x61: // ADC A,(HL+A)
                case 0x62: // SUB A,(HL+A)
                case 0x63: // SBC A,(HL+A)
                case 0x64: // AND A,(HL+A)
                case 0x65: // XOR A,(HL+A)
                case 0x66: // OR  A,(HL+A)
                case 0x67: // CP  A,(HL+A)
                    OP(ADD + b1 - 0x60, 14) R8(1, REG_A) MR16R8(2, REG_HL, REG_A) return;

                case 0x70: // ADD HL,(HL+A)
                case 0x71: // ADC HL,(HL+A)
                case 0x72: // SUB HL,(HL+A)
                case 0x73: // SBC HL,(HL+A)
                case 0x74: // AND HL,(HL+A)
                case 0x75: // XOR HL,(HL+A)
                case 0x76: // OR  HL,(HL+A)
                case 0x77: // CP  HL,(HL+A)
                    OP16(ADD + b1 - 0x70, 16)
                    R16(1, REG_HL) MR16R8(2, REG_HL, REG_A) return;

                case 0x87:
                    OP(INC, 16) MR16R8(1, REG_HL, REG_A) NONE(2) return; // INC (HL+A)
                case 0x8f:
                    OP(DEC, 16) MR16R8(1, REG_HL, REG_A) NONE(2) return; // DEC (HL+A)

                case 0x97:
                    OP(INCW, 20) MR16R8(1, REG_HL, REG_A) NONE(2) return; // INCW (HL+A)
                case 0x9f:
                    OP(DECW, 20) MR16R8(1, REG_HL, REG_A) NONE(2) return; // DECW (HL+A)

                case 0xa0: // RLC (HL+A)
                case 0xa1: // RRC (HL+A)
                case 0xa2: // RL  (HL+A)
                case 0xa3: // RR  (HL+A)
                case 0xa4: // SLA (HL+A)
                case 0xa5: // SRA (HL+A)
                case 0xa6: // SLL (HL+A)
                case 0xa7: // SRL (HL+A)
                    OP(RLC + b1 - 0xa0, 16) MR16R8(1, REG_HL, REG_A) NONE(2) return;

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 20)
                    BIT8(1, b1 - 0x18) MR16R8(2, REG_HL, REG_A) return; // TSET b,(HL+A)
                case 0xa8:
                case 0xa9:
                case 0xaa:
                case 0xab:
                case 0xac:
                case 0xad:
                case 0xae:
                case 0xaf:
                    OP(BIT, 14)
                    BIT8(1, b1 - 0xa8) MR16R8(2, REG_HL, REG_A) return; // BIT b,(HL+A)
                case 0xb0:
                case 0xb1:
                case 0xb2:
                case 0xb3:
                case 0xb4:
                case 0xb5:
                case 0xb6:
                case 0xb7:
                    OP(RES, 18)
                    BIT8(1, b1 - 0xb0) MR16R8(2, REG_HL, REG_A) return; // RES b,(HL+A)
                case 0xb8:
                case 0xb9:
                case 0xba:
                case 0xbb:
                case 0xbc:
                case 0xbd:
                case 0xbe:
                case 0xbf:
                    OP(SET, 18)
                    BIT8(1, b1 - 0xb8) MR16R8(2, REG_HL, REG_A) return; // SET b,(HL+A)
            }
            break;

        case 0xf4:
        case 0xf5:
        case 0xf6:
            b1 = READ8();
            b2 = READ8();
            switch (b2)
            {
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                    OP(LD, 10)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1)
                    R8(2, b2 - 0x20) return; // LD (ix+d),r
                case 0x37:
                    OP(LD, 12)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1)
                    I8(2, READ8()) return; // LD (ix+d),n
                case 0x38:
                case 0x39:
                case 0x3a: /*case 0x3b:*/
                case 0x3c:
                case 0x3d:
                case 0x3e:
                    OP(LDA, 10)
                    R16(1, b2 - 0x38)
                    R16D8(2, REG_IX + b0 - 0xf4, b1) return; // LDA rr,ix+d
                case 0x3f:
                    OP(LDW, 16)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1)
                    I16(2, READ16()) return; // LDW (ix+d),mn
                case 0x40:
                case 0x41:
                case 0x42: /*case 0x43:*/
                case 0x44:
                case 0x45:
                case 0x46:
                    OP16(LD, 12)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1)
                    R16(2, b2 - 0x40) return; // LD (ix+d),rr

                case 0x68: // ADD (ix+d),n
                case 0x69: // ADC (ix+d),n
                case 0x6a: // SUB (ix+d),n
                case 0x6b: // SBC (ix+d),n
                case 0x6c: // AND (ix+d),n
                case 0x6d: // XOR (ix+d),n
                case 0x6e: // OR  (ix+d),n
                    OP(ADD + b2 - 0x68, 14)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1) I8(2, READ8()) return;
                case 0x6f: // CP  (ix+d),n
                    OP(ADD + b2 - 0x68, 12)
                    MR16D8(1, REG_IX + b0 - 0xf4, b1) I8(2, READ8()) return;

                case 0xc0:
                case 0xc1:
                case 0xc2:
                case 0xc3:
                case 0xc4:
                case 0xc5:
                case 0xc6:
                case 0xc7:
                case 0xc8:
                case 0xc9:
                case 0xca:
                case 0xcb:
                case 0xcc:
                case 0xcd:
                case 0xce:
                case 0xcf:
                    OPCC(JP, 10, 12)
                    CC(1, b2 - 0xc0)
                    R16D8(2, REG_IX + b0 - 0xf4, b1) return; // JP [cc,]ix+d
                case 0xd0:
                case 0xd1:
                case 0xd2:
                case 0xd3:
                case 0xd4:
                case 0xd5:
                case 0xd6:
                case 0xd7:
                case 0xd8:
                case 0xd9:
                case 0xda:
                case 0xdb:
                case 0xdc:
                case 0xdd:
                case 0xde:
                case 0xdf:
                    OPCC(CALL, 10, 18)
                    CC(1, b2 - 0xd0)
                    R16D8(2, REG_IX + b0 - 0xf4, b1) return; // CALL [cc,]ix+d
            }
            break;

        case 0xf7:
            b1 = READ8();
            switch (b1)
            {
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                    OP(LD, 14)
                    MR16R8(1, REG_HL, REG_A) R8(2, b1 - 0x20) return; // LD (HL+A),r
                case 0x37:
                    OP(LD, 16)
                    MR16R8(1, REG_HL, REG_A) I8(2, READ8()) return; // LD (HL+A),n
                case 0x38:
                case 0x39:
                case 0x3a: /*case 0x3b:*/
                case 0x3c:
                case 0x3d:
                case 0x3e:
                    OP(LDA, 14)
                    R16(1, b1 - 0x38) R16R8(2, REG_HL, REG_A) return; // LDA rr,HL+A
                case 0x3f:
                    OP(LDW, 20)
                    MR16R8(1, REG_HL, REG_A) I16(2, READ16()) return; // LDW (HL+A),mn
                case 0x40:
                case 0x41:
                case 0x42: /*case 0x43:*/
                case 0x44:
                case 0x45:
                case 0x46:
                    OP16(LD, 16)
                    MR16R8(1, REG_HL, REG_A) R16(2, b1 - 0x40) return; // LD (HL+A),rr

                case 0x68: // ADD (HL+A),n
                case 0x69: // ADC (HL+A),n
                case 0x6a: // SUB (HL+A),n
                case 0x6b: // SBC (HL+A),n
                case 0x6c: // AND (HL+A),n
                case 0x6d: // XOR (HL+A),n
                case 0x6e: // OR  (HL+A),n
                    OP(ADD + b1 - 0x68, 18)
                    MR16R8(1, REG_HL, REG_A) I8(2, READ8()) return;
                case 0x6f: // CP  (HL+A),n
                    OP(ADD + b1 - 0x68, 16)
                    MR16R8(1, REG_HL, REG_A) I8(2, READ8()) return;

                case 0xc0:
                case 0xc1:
                case 0xc2:
                case 0xc3:
                case 0xc4:
                case 0xc5:
                case 0xc6:
                case 0xc7:
                case 0xc8:
                case 0xc9:
                case 0xca:
                case 0xcb:
                case 0xcc:
                case 0xcd:
                case 0xce:
                case 0xcf:
                    OPCC(JP, 14, 16)
                    CC(1, b1 - 0xc0) R16R8(2, REG_HL, REG_A) return; // JP [cc,]HL+A
                case 0xd0:
                case 0xd1:
                case 0xd2:
                case 0xd3:
                case 0xd4:
                case 0xd5:
                case 0xd6:
                case 0xd7:
                case 0xd8:
                case 0xd9:
                case 0xda:
                case 0xdb:
                case 0xdc:
                case 0xdd:
                case 0xde:
                case 0xdf:
                    OPCC(CALL, 14, 22)
                    CC(1, b1 - 0xd0) R16R8(2, REG_HL, REG_A) return; // CALL [cc,]HL+A
            }
            break;

        case 0xf8:
        case 0xf9:
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0xfd:
        case 0xfe:
            b1 = READ8();
            switch (b1)
            {
                case 0x12: // MUL HL,g
                case 0x13: // DIV HL,g
                    OP(MUL + b1 - 0x12, 18) R16(1, REG_HL) R8(2, b0 - 0xf8) return;

                case 0x14:
                case 0x15:
                case 0x16:
                    OP16(ADD, 8)
                    R16(1, REG_IX + b1 - 0x14)
                    R16(2, b0 - 0xf8) return; // ADD ix,gg

                case 0x30:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                    OP(LD, 4)
                    R8(1, b1 - 0x30) R8(2, b0 - 0xf8) return; // LD r,g
                case 0x38:
                case 0x39:
                case 0x3a: /*case 0x3b:*/
                case 0x3c:
                case 0x3d:
                case 0x3e:
                    OP16(LD, 6)
                    R16(1, b1 - 0x38) R16(2, b0 - 0xf8) return; // LD rr,gg

                case 0x58: // LDI
                case 0x59: // LDIR
                case 0x5a: // LDD
                case 0x5b: // LDDR
                case 0x5c: // CPI
                case 0x5d: // CPIR
                case 0x5e: // CPD
                case 0x5f: // CPDR
                    if (b0 == 0xfe)
                    {
                        OPCC(LDI + b1 - 0x58, 14, 18) NONE(1) NONE(2) return;
                    }
                    break;

                case 0x60: // ADD A,g
                case 0x61: // ADC A,g
                case 0x62: // SUB A,g
                case 0x63: // SBC A,g
                case 0x64: // AND A,g
                case 0x65: // XOR A,g
                case 0x66: // OR  A,g
                case 0x67: // CP  A,g
                    OP(ADD + b1 - 0x60, 4) R8(1, REG_A) R8(2, b0 - 0xf8) return;

                case 0x68: // ADD g,n
                case 0x69: // ADC g,n
                case 0x6a: // SUB g,n
                case 0x6b: // SBC g,n
                case 0x6c: // AND g,n
                case 0x6d: // XOR g,n
                case 0x6e: // OR  g,n
                case 0x6f: // CP  g,n
                    OP(ADD + b1 - 0x68, 6)
                    R8(1, b0 - 0xf8) I8(2, READ8()) return;

                case 0x70: // ADD HL,gg
                case 0x71: // ADC HL,gg
                case 0x72: // SUB HL,gg
                case 0x73: // SBC HL,gg
                case 0x74: // AND HL,gg
                case 0x75: // XOR HL,gg
                case 0x76: // OR  HL,gg
                case 0x77: // CP  HL,gg
                    OP16(ADD + b1 - 0x70, 8)
                    R16(1, REG_HL) R16(2, b0 - 0xf8) return;

                case 0xa0: // RLC g
                case 0xa1: // RRC g
                case 0xa2: // RL  g
                case 0xa3: // RR  g
                case 0xa4: // SLA g
                case 0xa5: // SRA g
                case 0xa6: // SLL g
                case 0xa7: // SRL g
                    OP(RLC + b1 - 0xa0, 4) R8(1, b0 - 0xf8) NONE(2) return;

                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                    OP(TSET, 8)
                    BIT8(1, b1 - 0x18) R8(2, b0 - 0xf8) return; // TSET b,g
                case 0xa8:
                case 0xa9:
                case 0xaa:
                case 0xab:
                case 0xac:
                case 0xad:
                case 0xae:
                case 0xaf:
                    OP(BIT, 4)
                    BIT8(1, b1 - 0xa8) R8(2, b0 - 0xf8) return; // BIT b,g
                case 0xb0:
                case 0xb1:
                case 0xb2:
                case 0xb3:
                case 0xb4:
                case 0xb5:
                case 0xb6:
                case 0xb7:
                    OP(RES, 4)
                    BIT8(1, b1 - 0xb0) R8(2, b0 - 0xf8) return; // RES b,g
                case 0xb8:
                case 0xb9:
                case 0xba:
                case 0xbb:
                case 0xbc:
                case 0xbd:
                case 0xbe:
                case 0xbf:
                    OP(SET, 4)
                    BIT8(1, b1 - 0xb8) R8(2, b0 - 0xf8) return; // SET b,g

                case 0xd0:
                case 0xd1:
                case 0xd2:
                case 0xd3:
                case 0xd4:
                case 0xd5:
                case 0xd6:
                case 0xd7:
                case 0xd8:
                case 0xd9:
                case 0xda:
                case 0xdb:
                case 0xdc:
                case 0xdd:
                case 0xde:
                case 0xdf:
                    if (b0 == 0xfe)
                    {
                        OPCC(RET, 6, 14)
                        CC(1, b1 - 0xd0) NONE(2) return; // RET cc
                    }
                    break;
            }
            break;

        case 0xff:
            OP(SWI, 20) NONE(1) NONE(2) return; // SWI
    }

    OP(UNKNOWN, 2) NONE(1) NONE(2)
}

uint16_t r8(const uint16_t r)
{
    switch (r)
    {
        case REG_A:
            return m_af.b.h;
        case REG_B:
            return m_bc.b.h;
        case REG_C:
            return m_bc.b.l;
        case REG_D:
            return m_de.b.h;
        case REG_E:
            return m_de.b.l;
        case REG_H:
            return m_hl.b.h;
        case REG_L:
            return m_hl.b.l;

        default:
            fatal("%04x: unimplemented r8 register index = %d\n", m_pc.w, r);
    }
}

void w8(const uint16_t r, uint16_t value)
{
    switch (r)
    {
        case REG_A:
            m_af.b.h = value;
            return;
        case REG_B:
            m_bc.b.h = value;
            return;
        case REG_C:
            m_bc.b.l = value;
            return;
        case REG_D:
            m_de.b.h = value;
            return;
        case REG_E:
            m_de.b.l = value;
            return;
        case REG_H:
            m_hl.b.h = value;
            return;
        case REG_L:
            m_hl.b.l = value;
            return;

        default:
            fatal("%04x: unimplemented w8 register index = %d\n", m_pc.w, r);
    }
}

uint16_t r16(const uint16_t r)
{
    switch (r)
    {
        case REG_BC:
            return m_bc.w;
        case REG_DE:
            return m_de.w;
        case REG_HL:
            return m_hl.w;
        case REG_IX:
            return m_ix.w;
        case REG_IY:
            return m_iy.w;
        case REG_SP:
            return m_sp.w;
        case REG_AF:
            return m_af.w;
            //      case AF2:   return m_af2.w;
            // one interrupt flip-flop? Needed by e.g. mjifb
        case REG_AF2:
            return (m_af2.w & (~IF)) | (m_af.w & IF);
        case REG_PC:
            return m_pc.w;

        default:
            fatal("%04x: unimplemented r16 register index = %d\n", m_pc.w, r);
    }
}

void w16(const uint16_t r, uint16_t value)
{
    switch (r)
    {
        case REG_BC:
            m_bc.w = value;
            return;
        case REG_DE:
            m_de.w = value;
            return;
        case REG_HL:
            m_hl.w = value;
            return;
        case REG_IX:
            m_ix.w = value;
            return;
        case REG_IY:
            m_iy.w = value;
            return;
        case REG_SP:
            m_sp.w = value;
            return;
        case REG_AF:
            m_af.w = value;
            return;
        case REG_AF2:
            m_af2.w = value;
            return;
        case REG_PC:
            m_pc.w = value;
            return;

        default:
            fatal("%04x: unimplemented w16 register index = %d\n", m_pc.w, r);
    }
}

#define READ_FN(N)                                                             \
    uint8_t Read##N##_8()                                                      \
    {                                                                          \
        switch (m_mode##N)                                                     \
        {                                                                      \
            case E_CC:                                                         \
            case E_BIT8:                                                       \
            case E_I8:                                                         \
                return (uint8_t)m_r##N;                                        \
            case E_D8:                                                         \
                return (uint8_t)m_r##N;                                        \
            case E_R8:                                                         \
                return (uint8_t)r8(m_r##N);                                    \
            case E_MI16:                                                       \
                return RM8(m_r##N);                                            \
            case E_MR16R8:                                                     \
                return RM8((uint16_t)(r16(m_r##N) + (int8_t)r8(m_r##N##b)));   \
            case E_MR16:                                                       \
                switch (m_r##N)                                                \
                {                                                              \
                    case REG_IX:                                                   \
                        return RX8(m_ix.w, m_ixbase);                          \
                    case REG_IY:                                                   \
                        return RX8(m_iy.w, m_iybase);                          \
                }                                                              \
                return RM8(r16(m_r##N));                                       \
            case E_MR16D8:                                                     \
                switch (m_r##N)                                                \
                {                                                              \
                    case REG_IX:                                                   \
                        return RX8(                                            \
                            (uint16_t)(m_ix.w + (int8_t)m_r##N##b), m_ixbase); \
                    case REG_IY:                                                   \
                        return RX8(                                            \
                            (uint16_t)(m_iy.w + (int8_t)m_r##N##b), m_iybase); \
                }                                                              \
                return RM8((uint16_t)(r16(m_r##N) + (int8_t)m_r##N##b));       \
            default:                                                           \
                fatal("%04x: unimplemented Read%d_8 mode = %d\n",              \
                    m_pc.w,                                                    \
                    N,                                                         \
                    m_mode##N);                                                \
        }                                                                      \
        return 0;                                                              \
    }                                                                          \
    uint16_t Read##N##_16()                                                    \
    {                                                                          \
        switch (m_mode##N)                                                     \
        {                                                                      \
            case E_I16:                                                        \
                return m_r##N;                                                 \
            case E_D16:                                                        \
                return m_r##N - 1;                                             \
            case E_R16:                                                        \
                return r16(m_r##N);                                            \
            case E_R16D8:                                                      \
                return r16(m_r##N) + (int8_t)m_r##N##b;                        \
            case E_R16R8:                                                      \
                return r16(m_r##N) + (int8_t)r8(m_r##N##b);                    \
            case E_MI16:                                                       \
                return RM16(m_r##N);                                           \
            case E_MR16R8:                                                     \
                return RM16((uint16_t)(r16(m_r##N) + (int8_t)r8(m_r##N##b)));  \
            case E_MR16:                                                       \
                switch (m_r##N)                                                \
                {                                                              \
                    case REG_IX:                                                   \
                        return RX16(m_ix.w, m_ixbase);                         \
                    case REG_IY:                                                   \
                        return RX16(m_iy.w, m_iybase);                         \
                }                                                              \
                return RM16(r16(m_r##N));                                      \
            case E_MR16D8:                                                     \
                switch (m_r##N)                                                \
                {                                                              \
                    case REG_IX:                                                   \
                        return RX16(                                           \
                            (uint16_t)(m_ix.w + (int8_t)m_r##N##b), m_ixbase); \
                    case REG_IY:                                                   \
                        return RX16(                                           \
                            (uint16_t)(m_iy.w + (int8_t)m_r##N##b), m_iybase); \
                }                                                              \
                return RM16((uint16_t)(r16(m_r##N) + (int8_t)m_r##N##b));      \
            default:                                                           \
                fatal("%04x: unimplemented Read%d_16 modes = %d\n",            \
                    m_pc.w,                                                    \
                    N,                                                         \
                    m_mode##N);                                                \
        }                                                                      \
        return 0;                                                              \
    }

#define WRITE_FN(N)                                                           \
    void Write##N##_8(uint8_t value)                                          \
    {                                                                         \
        switch (m_mode##N)                                                    \
        {                                                                     \
            case E_R8:                                                        \
                w8(m_r##N, value);                                            \
                return;                                                       \
            case E_MI16:                                                      \
                WM8(m_r##N, value);                                           \
                return;                                                       \
            case E_MR16R8:                                                    \
                WM8((uint16_t)(r16(m_r##N) + (int8_t)r8(m_r##N##b)), value);  \
                return;                                                       \
            case E_MR16:                                                      \
                switch (m_r##N)                                               \
                {                                                             \
                    case REG_IX:                                                  \
                        WX8(m_ix.w, value, m_ixbase);                         \
                        return;                                               \
                    case REG_IY:                                                  \
                        WX8(m_iy.w, value, m_iybase);                         \
                        return;                                               \
                }                                                             \
                WM8(r16(m_r##N), value);                                      \
                return;                                                       \
            case E_MR16D8:                                                    \
                switch (m_r##N)                                               \
                {                                                             \
                    case REG_IX:                                                  \
                        WX8((uint16_t)(m_ix.w + (int8_t)m_r##N##b),           \
                            value,                                            \
                            m_ixbase);                                        \
                        return;                                               \
                    case REG_IY:                                                  \
                        WX8((uint16_t)(m_iy.w + (int8_t)m_r##N##b),           \
                            value,                                            \
                            m_iybase);                                        \
                        return;                                               \
                }                                                             \
                WM8((uint16_t)(r16(m_r##N) + (int8_t)m_r##N##b), value);      \
                return;                                                       \
            default:                                                          \
                fatal("%04x: unimplemented Write%d_8 mode = %d\n",            \
                    m_pc.w,                                                   \
                    N,                                                        \
                    m_mode##N);                                               \
        }                                                                     \
    }                                                                         \
    void Write##N##_16(uint16_t value)                                        \
    {                                                                         \
        switch (m_mode##N)                                                    \
        {                                                                     \
            case E_R16:                                                       \
                w16(m_r##N, value);                                           \
                return;                                                       \
            case E_MI16:                                                      \
                WM16(m_r##N, value);                                          \
                return;                                                       \
            case E_MR16R8:                                                    \
                WM16((uint16_t)(r16(m_r##N) + (int8_t)r8(m_r##N##b)), value); \
                return;                                                       \
            case E_MR16:                                                      \
                switch (m_r##N)                                               \
                {                                                             \
                    case REG_IX:                                                  \
                        WX16(m_ix.w, value, m_ixbase);                        \
                        return;                                               \
                    case REG_IY:                                                  \
                        WX16(m_iy.w, value, m_iybase);                        \
                        return;                                               \
                }                                                             \
                WM16(r16(m_r##N), value);                                     \
                return;                                                       \
            case E_MR16D8:                                                    \
                switch (m_r##N)                                               \
                {                                                             \
                    case REG_IX:                                                  \
                        WX16((uint16_t)(m_ix.w + (int8_t)m_r##N##b),          \
                            value,                                            \
                            m_ixbase);                                        \
                        return;                                               \
                    case REG_IY:                                                  \
                        WX16((uint16_t)(m_iy.w + (int8_t)m_r##N##b),          \
                            value,                                            \
                            m_iybase);                                        \
                        return;                                               \
                }                                                             \
                WM16((uint16_t)(r16(m_r##N) + (int8_t)m_r##N##b), value);     \
                return;                                                       \
            default:                                                          \
                fatal("%04x: unimplemented Write%d_16 mode = %d\n",           \
                    m_pc.w,                                                   \
                    N,                                                        \
                    m_mode##N);                                               \
        }                                                                     \
    }

READ_FN(1)
READ_FN(2)
WRITE_FN(1)
WRITE_FN(2)

int Test(uint8_t cond)
{
    int s, v;
    switch (cond)
    {
        case FLS:
            return 0;
        case LT:
            s = F & SF;
            v = F & VF;
            return (s && !v) || (!s && v);
        case LE:
            s = F & SF;
            v = F & VF;
            return (F & ZF) || (s && !v) || (!s && v);
        case ULE:
            return (F & CF) || (F & ZF);
        case OV:
            return F & VF;
        case MI:
            return F & SF;
        case Z:
            return F & ZF;
        case CR:
            return F & CF;
        case T:
            return 1;
        case GE:
            s = F & SF;
            v = F & VF;
            return (s && v) || (!s && !v);
        case GT:
            s = F & SF;
            v = F & VF;
            return !((F & ZF) || (s && !v) || (!s && v));
        case UGT:
            return !(F & CF) && !(F & ZF);
        case NOV:
            return !(F & VF);
        case PL:
            return !(F & SF);
        case NZ:
            return !(F & ZF);
        case NC:
            return !(F & CF);
        default:
            fatal("%04x: unimplemented condition = %d\n", m_pc.w, cond);
    }

    // never executed
    // return 0;
}

static void Push(uint16_t rr)
{
    m_sp.w -= 2;
    WM16(m_sp.w, r16(rr));
}

static void Pop(uint16_t rr)
{
    w16(rr, RM16(m_sp.w));
    m_sp.w += 2;
}

static void Cyc()
{
}

static void Cyc_f()
{
}

static void clear_irq(int irq)
{
    m_irq_state &= ~(1 << irq);
}

static void take_interrupt(int irq)
{
    if (irq != INT0)
        clear_irq(irq);

    Push(REG_PC);
    Push(REG_AF);

    F &= ~IF;

    m_pc.w = 0x10 + irq * 8;
}

static void check_interrupts()
{
    int irq;
    int mask;

    if (!(F & IF))
        return;

    for (irq = INTSWI; irq < INTMAX; ++irq)
    {
        mask = (1 << irq);
        if (irq >= INT0)
            mask &= m_irq_mask;
        if (m_irq_state & mask)
        {
            take_interrupt(irq);
            return;
        }
    }
}

void tlcs90_step()
{
    uint8_t a8, b8;
    uint16_t a16, b16;
    unsigned a32;
    union pair_t tmp;

        m_prvpc.w = m_pc.w;
        // debugger_instruction_hook(m_pc.w);

        check_interrupts();

        m_addr = m_pc.w;
        decode();
        m_pc.w = m_addr;

        switch (m_op)
        {
            case NOP:
                Cyc();
                break;

            case EX:
                a16 = Read1_16();
                Write1_16(Read2_16());
                Write2_16(a16);
                Cyc();
                break;
            case EXX:
                tmp = m_bc;
                m_bc = m_bc2;
                m_bc2 = tmp;
                tmp = m_de;
                m_de = m_de2;
                m_de2 = tmp;
                tmp = m_hl;
                m_hl = m_hl2;
                m_hl2 = tmp;
                Cyc();
                break;

            case LD:
                Write1_8(Read2_8());
                Cyc();
                break;
            case LDW:
            case LD | OP_16:
                Write1_16(Read2_16());
                Cyc();
                break;

                //          case LDA:
                //              Cyc();
                //              break;

            case LDI:
#define _LDI                      \
    WM8(m_de.w, RM8(m_hl.w));     \
    m_de.w++;                     \
    m_hl.w++;                     \
    m_bc.w--;                     \
    F &= SF | ZF | IF | XCF | CF; \
    if (m_bc.w)                   \
        F |= VF;

                _LDI Cyc();
                break;
            case LDIR:
                _LDI if (m_bc.w)
                {
                    m_pc.w -= 2;
                    Cyc();
                }
                else Cyc_f();
                break;

            case LDD:
#define _LDD                      \
    WM8(m_de.w, RM8(m_hl.w));     \
    m_de.w--;                     \
    m_hl.w--;                     \
    m_bc.w--;                     \
    F &= SF | ZF | IF | XCF | CF; \
    if (m_bc.w)                   \
        F |= VF;

                _LDD Cyc();
                break;
            case LDDR:
                _LDD if (m_bc.w)
                {
                    m_pc.w -= 2;
                    Cyc();
                }
                else Cyc_f();
                break;

                //          case CPD:
                //              Cyc();
                //              break;
                //          case CPDR:
                //              Cyc();
                //              break;
            case CPI:
                a8 = RM8(m_hl.w);
                b8 = m_af.b.h - a8;
                m_hl.w++;
                m_bc.w--;
                F = (F & (IF | CF)) | SZ[b8] | ((m_af.b.h ^ a8 ^ b8) & HF) | NF;
                if (m_bc.w)
                    F |= VF;
                Cyc();
                break;
            case CPIR:
                a8 = RM8(m_hl.w);
                b8 = m_af.b.h - a8;
                m_hl.w++;
                m_bc.w--;
                F = (F & (IF | CF)) | SZ[b8] | ((m_af.b.h ^ a8 ^ b8) & HF) | NF;
                if (m_bc.w)
                {
                    F |= VF;
                    m_pc.w -= 2;
                    Cyc();
                }
                else
                    Cyc_f();
                break;

            case PUSH:
                Push(m_r1);
                Cyc();
                break;
            case POP:
                Pop(m_r1);
                Cyc();
                break;

            case JP:
                if (Test(Read1_8()))
                {
                    m_pc.w = Read2_16();
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case JR:
                if (Test(Read1_8()))
                {
                    m_pc.w += /*2 +*/ (int8_t)Read2_8();
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case JR | OP_16:
                if (Test(Read1_8()))
                {
                    m_pc.w += /*2 +*/ Read2_16();
                    Cyc();
                }
                else
                    Cyc_f();
                break;

            case CALL:
                if (Test(Read1_8()))
                {
                    Push(REG_PC);
                    m_pc.w = Read2_16();
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case CALLR:
                Push(REG_PC);
                m_pc.w += /*2 +*/ Read1_16();
                Cyc();
                break;

            case RET:
                if (Test(Read1_8()))
                {
                    Pop(REG_PC);
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case RETI:
                Pop(REG_AF);
                Pop(REG_PC);
                Cyc();
                break;

                //          case HALT:
                //              Cyc();
                //              break;
            case DI:
                m_after_EI = 0;
                F &= ~IF;
                Cyc();
                break;
            case EI:
                m_after_EI = !(F & IF);
                Cyc();
                break;

            case SWI:
                Cyc();
                take_interrupt(INTSWI);
                break;

            case DAA:
            {
                uint8_t cf, nf, hf, lo, hi, diff;
                cf = F & CF;
                nf = F & NF;
                hf = F & HF;
                lo = m_af.b.h & 15;
                hi = m_af.b.h / 16;

                if (cf)
                {
                    diff = (lo <= 9 && !hf) ? 0x60 : 0x66;
                }
                else
                {
                    if (lo >= 10)
                    {
                        diff = hi <= 8 ? 0x06 : 0x66;
                    }
                    else
                    {
                        if (hi >= 10)
                        {
                            diff = hf ? 0x66 : 0x60;
                        }
                        else
                        {
                            diff = hf ? 0x06 : 0x00;
                        }
                    }
                }
                if (nf)
                    m_af.b.h -= diff;
                else
                    m_af.b.h += diff;

                F = SZP[REG_A] | (F & (IF | NF));
                if (cf || (lo <= 9 ? hi >= 10 : hi >= 9))
                    F |= XCF | CF;
                if (nf ? hf && lo <= 5 : lo >= 10)
                    F |= HF;
            }
                Cyc();
                break;

            case CPL:
                m_af.b.h ^= 0xff;
                F |= HF | NF;
                Cyc();
                break;
            case NEG:
                a8 = 0;
                b8 = m_af.b.h;
                a32 = a8 - b8;
                F = (F & IF) | SZ[(uint8_t)a32] | NF;
                if (a32 & 0x100)
                    F |= CF | XCF; // X?
                if ((a8 ^ a32 ^ b8) & 0x10)
                    F |= HF;
                if ((b8 ^ a8) & (a8 ^ a32) & 0x80)
                    F |= VF;
                m_af.b.h = a32;
                Cyc();
                break;

            case LDAR:
                m_hl.w = m_pc.w + /*2 +*/ Read2_16();
                Cyc();
                break;

            case RCF:
                F &= SF | ZF | IF | VF;
                Cyc();
                break;
            case SCF:
                F = (F & (SF | ZF | IF | VF)) | XCF | CF;
                Cyc();
                break;
            case CCF:
                F = (F & (SF | ZF | IF | VF)) | ((F & CF) ? HF : (XCF | CF));
                Cyc();
                break;

                //          case TSET:
                //              Cyc();
                //              break;
            case BIT:
                F = (F & (IF | CF)) | HF | SZ_BIT[Read2_8() & (1 << Read1_8())];
                Cyc();
                break;
            case SET:
                Write2_8(Read2_8() | (1 << Read1_8()));
                Cyc();
                break;
            case RES:
                Write2_8(Read2_8() & (~(1 << Read1_8())));
                Cyc();
                break;

            case INC:
                a8 = Read1_8() + 1;
                Write1_8(a8);
                F = (F & (IF | CF)) | SZHV_inc[a8];
                if (a8 == 0)
                    F |= XCF;
                Cyc();
                break;
            case INCX:
                if (F & XCF)
                {
                    a8 = Read1_8() + 1;
                    Write1_8(a8);
                    F = (F & (IF | CF)) | SZHV_inc[a8];
                    if (a8 == 0)
                        F |= XCF;
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case INC | OP_16:
                a16 = Read1_16() + 1;
                Write1_16(a16);
                if (a16 == 0)
                    F |= XCF;
                else
                    F &= ~XCF;
                Cyc();
                break;
            case INCW:
                a16 = Read1_16();
                a32 = a16 + 1;
                Write1_16(a32);
                F &= IF | CF;
                if ((uint16_t)a32 == 0)
                    F |= ZF | XCF;
                if (a32 & 0x8000)
                    F |= SF;
                if ((a16 ^ 0x8000) & a32 & 0x8000)
                    F |= VF;
                if ((a16 ^ a32 ^ 1) & 0x1000)
                    F |= HF; //??
                Cyc();
                break;

            case DEC:
                a8 = Read1_8() - 1;
                Write1_8(a8);
                F = (F & (IF | CF)) | SZHV_dec[a8];
                if (a8 == 0)
                    F |= XCF;
                Cyc();
                break;
            case DECX:
                if (F & XCF)
                {
                    a8 = Read1_8() - 1;
                    Write1_8(a8);
                    F = (F & (IF | CF)) | SZHV_dec[a8];
                    if (a8 == 0)
                        F |= XCF;
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case DEC | OP_16:
                a16 = Read1_16() - 1;
                Write1_16(a16);
                if (a16 == 0)
                    F |= XCF;
                else
                    F &= ~XCF;
                Cyc();
                break;
            case DECW:
                a16 = Read1_16();
                a32 = a16 - 1;
                Write1_16(a32);
                F = (F & (IF | CF)) | NF;
                if ((uint16_t)a32 == 0)
                    F |= ZF | XCF;
                if (a32 & 0x8000)
                    F |= SF;
                if (a16 == 0x8000)
                    F |= VF;
                if ((a16 ^ a32 ^ 1) & 0x1000)
                    F |= HF; //??
                Cyc();
                break;

            case ADD:
            case ADC:
                a8 = Read1_8();
                b8 = Read2_8();
                a32 = a8 + b8;
                if ((m_op == ADC) && (F & CF))
                    a32 += 1;
                Write1_8(a32);
                F = (F & IF) | SZ[(uint8_t)a32];
                if (a32 & 0x100)
                    F |= CF | XCF; // X?
                if ((a8 ^ a32 ^ b8) & 0x10)
                    F |= HF;
                if ((b8 ^ a8 ^ 0x80) & (b8 ^ a32) & 0x80)
                    F |= VF;
                Cyc();
                break;
            case ADD | OP_16:
            case ADC | OP_16:
                a16 = Read1_16();
                b16 = Read2_16();
                a32 = a16 + b16;
                if ((m_op == (ADC | OP_16)) && (F & CF))
                    a32 += 1;
                Write1_16(a32);
                if ((m_op == (ADD | OP_16)) && m_mode2 == E_R16)
                {
                    F &= SF | ZF | IF | VF;
                }
                else
                {
                    F &= IF;
                    if ((uint16_t)a32 == 0)
                        F |= ZF;
                    if (a32 & 0x8000)
                        F |= SF;
                    if ((b16 ^ a16 ^ 0x8000) & (b16 ^ a32) & 0x8000)
                        F |= VF;
                }
                if (a32 & 0x10000)
                    F |= CF | XCF; // X?
                if ((a16 ^ a32 ^ b16) & 0x1000)
                    F |= HF; //??
                Cyc();
                break;

            case CP:
            case SUB:
            case SBC:
                a8 = Read1_8();
                b8 = Read2_8();
                a32 = a8 - b8;
                if ((m_op == SBC) && (F & CF))
                    a32 -= 1;
                F = (F & IF) | SZ[(uint8_t)a32] | NF;
                if (a32 & 0x100)
                    F |= CF | XCF; // X?
                if ((a8 ^ a32 ^ b8) & 0x10)
                    F |= HF;
                if ((b8 ^ a8) & (a8 ^ a32) & 0x80)
                    F |= VF;
                if (m_op != CP)
                    Write1_8(a32);
                Cyc();
                break;
            case CP | OP_16:
            case SUB | OP_16:
            case SBC | OP_16:
                a16 = Read1_16();
                b16 = Read2_16();
                a32 = a16 - b16;
                if ((m_op == (SBC | OP_16)) && (F & CF))
                    a32 -= 1;
                F = (F & IF) | NF;
                if ((uint16_t)a32 == 0)
                    F |= ZF;
                if (a32 & 0x8000)
                    F |= SF;
                if (a32 & 0x10000)
                    F |= CF | XCF; // X?
                if ((a16 ^ a32 ^ b16) & 0x1000)
                    F |= HF; //??
                if ((b16 ^ a16) & (a16 ^ a32) & 0x8000)
                    F |= VF;
                if (m_op != (CP | OP_16))
                    Write1_16(a32);
                Cyc();
                break;

            case AND:
                a8 = Read1_8() & Read2_8();
                Write1_8(a8);
                F = (F & IF) | SZP[a8] | HF;
                Cyc();
                break;
            case AND | OP_16:
                a16 = Read1_16() & Read2_16();
                Write1_16(a16);
                F = (F & IF) | HF;
                if (a16 == 0)
                    F |= ZF;
                if (a16 & 0x8000)
                    F |= SF;
                Cyc();
                break;
            case XOR:
                a8 = Read1_8() ^ Read2_8();
                Write1_8(a8);
                F = (F & IF) | SZP[a8];
                Cyc();
                break;
            case XOR | OP_16:
                a16 = Read1_16() ^ Read2_16();
                Write1_16(a16);
                F &= IF;
                if (a16 == 0)
                    F |= ZF;
                if (a16 & 0x8000)
                    F |= SF;
                Cyc();
                break;
            case OR:
                a8 = Read1_8() | Read2_8();
                Write1_8(a8);
                F = (F & IF) | SZP[a8];
                Cyc();
                break;
            case OR | OP_16:
                a16 = Read1_16() | Read2_16();
                Write1_16(a16);
                F &= IF;
                if (a16 == 0)
                    F |= ZF;
                if (a16 & 0x8000)
                    F |= SF;
                Cyc();
                break;

            case RLC:
                a8 = Read1_8();
                a8 = (a8 << 1) | (a8 >> 7);
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (a8 & 0x01)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case RRC:
                a8 = Read1_8();
                a8 = (a8 >> 1) | (a8 << 7);
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (a8 & 0x80)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case RL:
                a8 = Read1_8();
                b8 = a8 & 0x80;
                a8 <<= 1;
                if (F & CF)
                    a8 |= 0x01;
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (b8)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case RR:
                a8 = Read1_8();
                b8 = a8 & 0x01;
                a8 >>= 1;
                if (F & CF)
                    a8 |= 0x80;
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (b8)
                    F |= CF | XCF; // X?
                Cyc();
                break;

            case SLA:
            case SLL:
                a8 = Read1_8();
                b8 = a8 & 0x80;
                a8 <<= 1;
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (b8)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case SRA:
                a8 = Read1_8();
                b8 = a8 & 0x01;
                a8 = (a8 & 0x80) | (a8 >> 1);
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (b8)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case SRL:
                a8 = Read1_8();
                b8 = a8 & 0x01;
                a8 >>= 1;
                Write1_8(a8);
                if (m_mode1 == E_R8 && m_r1 == REG_A)
                    F &= SF | ZF | IF | PF;
                else
                    F = (F & IF) | SZP[a8];
                if (b8)
                    F |= CF | XCF; // X?
                Cyc();
                break;
            case RLD:
                a8 = m_af.b.h;
                b8 = Read1_8();
                Write1_8((b8 << 4) | (a8 & 0x0f));
                a8 = (a8 & 0xf0) | (b8 >> 4);
                F = (F & (IF | CF)) | SZP[a8];
                m_af.b.h = a8;
                Cyc();
                break;
            case RRD:
                a8 = m_af.b.h;
                b8 = Read1_8();
                Write1_8((b8 >> 4) | (a8 << 4));
                a8 = (a8 & 0xf0) | (b8 & 0x0f);
                F = (F & (IF | CF)) | SZP[a8];
                m_af.b.h = a8;
                Cyc();
                break;

            case DJNZ:
                if (--m_bc.b.h)
                {
                    m_pc.w += /*2 +*/ (int8_t)Read1_8();
                    Cyc();
                }
                else
                    Cyc_f();
                break;
            case DJNZ | OP_16:
                if (--m_bc.w)
                {
                    m_pc.w += /*2 +*/ (int8_t)Read2_8();
                    Cyc();
                }
                else
                    Cyc_f();
                break;

            case MUL:
                m_hl.w = (uint16_t)m_hl.b.l * (uint16_t)Read2_8();
                Cyc();
                break;
            case DIV:
                a16 = m_hl.w;
                b16 = (uint16_t)Read2_8();
                if (b16 == 0)
                {
                    F |= VF;
                    m_hl.w = (a16 << 8) | ((a16 >> 8) ^ 0xff);
                }
                else
                {
                    m_hl.b.h = a16 % b16;
                    a16 /= b16;
                    if (a16 > 0xff)
                        F |= VF;
                    else
                        F &= ~VF;
                    m_hl.b.l = a16;
                }
                Cyc();
                break;

            default:
                fatal("%04x: unimplemented opcode, op=%02x\n", m_pc, m_op);
        }

        if (m_op != EI)
            if (m_after_EI)
            {
                F |= IF;
                m_after_EI = 0;
            }
}

static void device_reset()
{
    m_pc.w = 0x0000;
    F &= ~IF;

    m_ixbase = 0;
    m_iybase = 0;
}

void tlcs90_init()
{
    for (int i = 0; i < 256; i++)
    {
        int p = 0;
        if (i & 0x01)
            ++p;
        if (i & 0x02)
            ++p;
        if (i & 0x04)
            ++p;
        if (i & 0x08)
            ++p;
        if (i & 0x10)
            ++p;
        if (i & 0x20)
            ++p;
        if (i & 0x40)
            ++p;
        if (i & 0x80)
            ++p;
        SZ[i] = i ? i & SF : ZF;
        //      SZ[i] |= (i & (YF | XF));       /* undocumented flag bits 5+3 */
        SZ_BIT[i] = i ? i & SF : ZF | PF;
        //      SZ_BIT[i] |= (i & (YF | XF));   /* undocumented flag bits 5+3 */
        SZP[i] = SZ[i] | ((p & 1) ? 0 : PF);
        SZHV_inc[i] = SZ[i];
        if (i == 0x80)
            SZHV_inc[i] |= VF;
        if ((i & 0x0f) == 0x00)
            SZHV_inc[i] |= HF;
        SZHV_dec[i] = SZ[i] | NF;
        if (i == 0x7f)
            SZHV_dec[i] |= VF;
        if ((i & 0x0f) == 0x0f)
            SZHV_dec[i] |= HF;
    }

    m_prvpc.w = m_pc.w = m_sp.w = m_af.w = m_bc.w = m_de.w = m_hl.w = m_ix.w =
        m_iy.w = m_af2.w = m_bc2.w = m_de2.w = m_hl2.w = 0;
    m_ixbase = m_iybase = 0;
    m_op = 0;
    m_mode1 = E_NONE;
    m_r1 = m_r1b = 0;
    m_mode2 = E_NONE;
    m_r2 = m_r2b = 0;
    m_cyc_t = m_cyc_f = 0;
    m_addr = 0;
    m_after_EI = 0;
    m_irq_state = m_irq_mask = 0;

	device_reset();
}
