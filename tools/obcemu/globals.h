#ifndef GLOBALS_H
#define GLOBALS_H

extern bool flag_enter_debugger;

extern void fatal(const char* msg, ...);

extern void emulator_init(const char* filename);
extern void emulator_run(void);

#endif

