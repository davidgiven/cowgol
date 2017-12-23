#ifndef GLOBALS_H
#define GLOBALS_H

#include <z80ex/z80ex.h>

extern Z80EX_CONTEXT* z80;
extern uint8_t ram[0x10000];

extern const uint8_t ccp_data[];
extern const int ccp_len;

extern void bios_coldboot(void);

extern void biosbdos_entry(void);

extern void fatal(const char* message, ...);

#endif

