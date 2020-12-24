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

#include "bios.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "tossystem.h"
#include "cpu.h"
#include "m68k.h"
#include "utils.h"

#define BIOS_TRACE_CONTEXT
#include "config.h"

uint32_t BIOS_Setexc()
{
    uint16_t nm = peek_u16(2);
    uint32_t vec = peek_u32(4);
    uint32_t old;

    FUNC_TRACE_ENTER_ARGS {
        printf("    nm: 0x%x, vec: 0x%x\n", nm, vec);
    }

    old = m68k_read_memory_32(4*nm);
    m68k_write_memory_32(4*nm, vec);

    return old;
}

uint32_t BIOS_Bconin()
{
    uint16_t dev = peek_u16(2);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", dev);
    }
    
    switch(dev)
    {
    case 2: /* console */
        if (console_input_available())
            return getchar() & 0xff;
        else
            return 0;
    default:
        return 0; /* TODO support reading from additional devices */
    }
}

uint32_t BIOS_Bconout()
{
    uint16_t dev = peek_u16(2);
    uint16_t c = peek_u16(4);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    dev: 0x%x, c: 0x%x '%c'\n", dev, c, c);
    }
    
    switch(dev)
    {
    case 2: /* console */
        putchar(c);
    default:
        return 0; /* TODO support writing to additional devices */
    }
}

uint32_t BIOS_Bconstat()
{
    uint16_t dev = peek_u16(2);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", dev);
    }    
    
    switch(dev)
    {
    case 2: /* console */
        if (console_input_available())
            return -1;
        else
            return 0;
    default:
        return 0; /* TODO support additional devices */
    }
}            

uint32_t BIOS_Bcostat()
{
    uint16_t dev = peek_u16(2);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", dev);
    }
    
    switch(dev)
    {
    case 2: /* console */
        return -1; /* Always ready */
    default:
        return 0; /* TODO support additional devices */
    }
}

/* Table of non-implemented BIOS functions */

#define BIOS_Drvmap NULL
#define BIOS_Getbpb NULL
#define BIOS_Getmpb NULL
#define BIOS_Kbshift NULL
#define BIOS_Mediach NULL
#define BIOS_Rwabs NULL
#define BIOS_Tickcal NULL

/* BIOS function table according to
 * http://www.yardley.cc/atari/compendium/atari-compendium-BIOS-Function-Reference.htm
 */
struct BIOS_function {
    char *name;
    uint32_t (*fnct)();
    uint16_t id;
};

struct BIOS_function BIOS_functions[] = {
    {"Bconin", BIOS_Bconin, 0x02},
    {"Bconout", BIOS_Bconout, 0x03},
    {"Bconstat", BIOS_Bconstat, 0x01},
    {"Bcostat", BIOS_Bcostat, 0x08},
    {"Drvmap", BIOS_Drvmap, 0x0A},
    {"Getbpb", BIOS_Getbpb, 0x07},
    {"Getmpb", BIOS_Getmpb, 0x00},
    {"Kbshift", BIOS_Kbshift, 0x0B},
    {"Mediach", BIOS_Mediach, 0x09},
    {"Rwabs", BIOS_Rwabs, 0x04},
    {"Setexc", BIOS_Setexc, 0x05},
    {"Tickcal", BIOS_Tickcal, 0x06}
};

void bios_trap()
{
    uint16_t fnct = peek_u16(0);
    int i;
    
    for(i=0; i<=sizeof(BIOS_functions)/sizeof(struct BIOS_function); ++i) {
        if (BIOS_functions[i].id == fnct) {
            if (BIOS_functions[i].fnct) {
                uint32_t r = BIOS_functions[i].fnct();
#ifdef ENABLE_BIOS_TRACE
                printf("Return from %s: %d = 0x%x\n",
                       BIOS_functions[i].name, r, r);
#endif
                m68k_set_reg(M68K_REG_D0, r);
            } else {
                halt_execution();
                printf("BIOS %s (0x%x) not implemented\n", BIOS_functions[i].name, fnct);
            }
            
            return;
        }
    }
            
    halt_execution();
    printf("BIOS Unknown function called 0x%x\n", fnct);
}
