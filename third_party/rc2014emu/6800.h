struct m6800 {
    uint8_t a;
    uint8_t b;
    uint8_t p;
    uint16_t s;
    uint16_t x;
    uint16_t y;
    uint16_t pc;

    /* Internal state */
    int wait;
    int oc_hold;
    int type;
#define CPU_6800	0
#define CPU_6803	1
#define	CPU_6303	2
#define	CPU_68HC11	3	/* May need a special type for some types */
    int intio;
#define INTIO_NONE	0
#define INTIO_6802	1
#define INTIO_6803	2
    uint8_t irq;
    uint8_t mode;
    int debug;

    /* I/O and memory */
    uint8_t iram_base;
    uint8_t iram[192];		/* Can be 192 bytes on late 6303 */

    uint8_t p1ddr;
    uint8_t p2ddr;
    uint8_t p1dr;
    uint8_t p2dr;
    uint8_t tcsr;
    uint16_t counter;
    uint16_t ocr;
    uint8_t rmcr;
    uint8_t trcsr;
    uint8_t rdr;
    uint8_t tdr;
    uint8_t ramcr;

};

#define P_C		1
#define P_V		2
#define P_Z		4
#define P_N		8
#define P_I		16
#define P_H		32
#define P_X		64
#define P_S		128

#define IRAM_BASE_6803	0x80
#define IRAM_BASE_6303X	0x40

#define TCSR_OLVL	0x01
#define TCSR_IEDG	0x02
#define TCSR_ETOI	0x04
#define TCSR_EOCI	0x08
#define TCSR_EICI	0x10
#define TCSR_TOF	0x20
#define TCSR_OCF	0x40
#define TCSR_ICF	0x80

#define TRCSR_WU	0x01
#define TRCSR_TE	0x02
#define TRCSR_TIE	0x04
#define TRCSR_RE	0x08
#define TRCSR_RIE	0x10
#define TRCSR_TDRE	0x20
#define TRCSR_ORFE	0x40
#define TRCSR_RDRF	0x80

#define RAMCR_RAME	0x40

#define IRQ_NMI		0x01
#define IRQ_IRQ1	0x02
#define IRQ_ICF		0x04
#define IRQ_OCF		0x08
#define IRQ_TOF		0x10
#define IRQ_SCI		0x20

extern uint8_t m6800_read(struct m6800 *cpu, uint16_t addr);
extern uint8_t m6800_debug_read(struct m6800 *cpu, uint16_t addr);
extern void m6800_write(struct m6800 *cpu, uint16_t addr, uint8_t data);

extern void m6800_sci_change(struct m6800 *cpu);
extern void m6800_tx_byte(struct m6800 *cpu, uint8_t byte);
extern void m6800_port_output(struct m6800 *cpu, int port);
extern uint8_t m6800_port_input(struct m6800 *cpu, int port);

/* Provided by the 6800 emulator */
extern void m6800_reset(struct m6800 *cpu, int mode);
extern int m6800_execute(struct m6800 *cpu);
extern void m6800_clear_interrupt(struct m6800 *cpu, int irq);
extern void m6800_raise_interrupt(struct m6800 *cpu, int irq);
extern void m6800_rx_byte(struct m6800 *cpu, uint8_t byte);
/* These are more internal but useful for debug/trace */
extern void m6800_do_write(struct m6800 *cpu, uint16_t addr, uint8_t val);
extern uint8_t m6800_do_read(struct m6800 *cpu, uint16_t addr);
extern uint8_t m6800_do_debug_read(struct m6800 *cpu, uint16_t addr);
extern void m6800_tx_done(struct m6800 *cpu);
