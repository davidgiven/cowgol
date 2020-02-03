#ifndef EMITTER_H
#define EMITTER_H

void emitter_open(const char* filename);
void emitter_open_chunk(void);
void emitter_printf(const char* fmt, ...);
void emitter_vprintf(const char* fmt, va_list ap);
void emitter_close_chunk(struct subroutine* sub);
void emitter_close(void);

#endif
