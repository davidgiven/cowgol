#ifndef SIM__HEADER
#define SIM__HEADER

extern void exit_error(char* fmt, ...);

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

extern void gemdos_syscall(void);

#endif /* SIM__HEADER */
