#ifndef SIM_H
#define SIM_H

#include <stdint.h>

extern void exit_error(char* fmt, ...);

extern uint8_t g_ram[];

extern unsigned int cpu_read_byte(unsigned int address);
extern unsigned int cpu_read_word(unsigned int address);
extern unsigned int cpu_read_long(unsigned int address);
extern void cpu_write_byte(unsigned int address, unsigned int value);
extern void cpu_write_word(unsigned int address, unsigned int value);
extern void cpu_write_long(unsigned int address, unsigned int value);
extern void cpu_pulse_reset(void);
extern void cpu_set_fc(unsigned int fc);
extern int  cpu_irq_ack(int level);
extern void cpu_instr_callback(int pc);

extern void bdos_syscall(void);
extern void bios_syscall(void);
extern void xbios_syscall(void);

extern void files_init(void);

#endif /* SIM__HEADER */
