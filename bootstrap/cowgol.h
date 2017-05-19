#ifndef COWGOL_H
#define COWGOL_H

extern int8_t extern_i8;
extern int16_t extern_i16;
extern int8_t* extern_p8;

extern int8_t* lomem;
extern int8_t* himem;

extern void cowgol_print(void);
extern void cowgol_print_char(void);
extern void cowgol_print_i8(void);
extern void cowgol_print_i16(void);
extern void cowgol_print_hex_i8(void);
extern void cowgol_print_hex_i16(void);
extern void cowgol_print_newline(void);

extern void compiled_main(void);

#endif
