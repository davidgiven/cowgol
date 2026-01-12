ENTRY(_start)

OUTPUT_FORMAT(binary)
OUTPUT_ARCH(m68k)

MEMORY
{
    RAM  (rwx) : ORIGIN = 0x00000500, LENGTH = 128K
    FILE (r)   : ORIGIN = 0x10000000, LENGTH = 128K
}

SECTIONS
{
    .header :
    {
        SHORT(0x601A);
        LONG(SIZEOF(.text));
        LONG(SIZEOF(.data));
        LONG(SIZEOF(.bss));
        LONG(0);
        LONG(0);
        LONG(TEXT_START);
        SHORT(0xFFFF);
    } AT > FILE

    TEXT_START = ORIGIN(RAM);

    .text :
    {
        *(.text*)
        *(.rodata*)
        . = ALIGN(4);
    } > RAM AT > FILE

    .data :
    {
        *(.data*)
        . = ALIGN(4);
    } > RAM AT > FILE

    .bss (NOLOAD) :
    {
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
    } > RAM

    .pad :
    {
        BYTE(0);
        . = ALIGN(128);
    } AT > FILE

}

