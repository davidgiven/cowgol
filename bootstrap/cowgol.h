#ifndef COWGOL_H
#define COWGOL_H

extern int8_t extern_i8;
extern int8_t extern_i8_2;
extern int16_t extern_i16;
extern int8_t* extern_p8;
extern uint32_t extern_u32;

extern int8_t* lomem;
extern int8_t* himem;
extern int8_t** cowgol_argv;
extern int8_t cowgol_argc;

extern void cowgol_print(void);
extern void cowgol_print_char(void);
extern void cowgol_print_i8(void);
extern void cowgol_print_i16(void);
extern void cowgol_print_hex_i8(void);
extern void cowgol_print_hex_i16(void);
extern void cowgol_print_newline(void);

extern void cowgol_file_openin(void);
extern void cowgol_file_openout(void);
extern void cowgol_file_openup(void);
extern void cowgol_file_putchar(void);
extern void cowgol_file_getchar(void);
extern void cowgol_file_putblock(void);
extern void cowgol_file_getblock(void);
extern void cowgol_file_seek(void);
extern void cowgol_file_tell(void);
extern void cowgol_file_ext(void);
extern void cowgol_file_close(void);

extern void cowgol_exit(void);

extern void compiled_main(void);

#endif
