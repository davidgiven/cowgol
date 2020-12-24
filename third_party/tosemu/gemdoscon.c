/*
 * TOSEMU - an emulated environment for TOS applications
 * Copyright (C) 2014 Johan Thelin <e8johan@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#include "gemdoscon_p.h"

#include <stdio.h>

#include "cpu.h"
#include "utils.h"
#include "m68k.h"

#include "gemdos_p.h"

/* Console I/O functions *****************************************************/

uint32_t GEMDOS_Cconin()
{   
    FUNC_TRACE_ENTER
    
    return getchar() & 0xff; /* TODO no shift key status, scancode */
}

uint32_t GEMDOS_Cnecin()
{   
    FUNC_TRACE_ENTER
    
    /* TODO: turn off not echo. */
    return getchar() & 0xff; /* TODO no shift key status, scancode */
}

uint32_t GEMDOS_Cconout()
{
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x '%c'\n", peek_u16(2), peek_u16(2)&0xff);
    }

    putchar(peek_u16(2)&0xff);
    return 0;
}

uint32_t GEMDOS_Cconis()
{
    FUNC_TRACE_ENTER

    if (console_input_available())
        return -1;
    else
        return 0;
}

uint32_t GEMDOS_Cconos()
{
    FUNC_TRACE_ENTER

    return -1; /* Always ready */
}

uint32_t GEMDOS_Cconws()
{
    uint32_t adr = peek_u32(2);
    uint32_t res = 0;
    uint8_t ch;

    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", adr);
    }
    
    while((ch=m68k_read_disassembler_8(adr++)))
    {
        putchar(ch);
        res++;
    }
    
    return res;
}
