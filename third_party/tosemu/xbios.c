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

#include "xbios.h"

#include <stdio.h>
#include <stdlib.h>

#include "tossystem.h"
#include "memory.h"
#include "cpu.h"
#include "m68k.h"

#define XBIOS_TRACE_CONTEXT
#include "config.h"

/* XBIOS functions */

uint32_t XBIOS_Getrez()
{
    FUNC_TRACE_ENTER
    
    /* Custom value, to ensure that HW-dependent code fails */
    return 8;
}

static uint32_t dreg[5], areg[4];

static void save_regs(void)
{
    int i;
    for(i=0; i<5; i++)
        dreg[i] = m68k_get_reg(0, M68K_REG_D3+i);
    for(i=0; i<4; i++)
        areg[i] = m68k_get_reg(0, M68K_REG_A3+i);
}

static void restore_regs(void)
{
    int i;
    for(i=0; i<5; i++)
        m68k_set_reg(M68K_REG_D3+i, dreg[i]);
    for(i=0; i<4; i++)
        m68k_set_reg(M68K_REG_A3+i, areg[i]);
}

/* Supexec has been implemented using magic memory, which provides a mechanism 
 * for triggering a callback. The general idea is:
 * 
 * 1. Switch to supervisor mode, thus switching stack
 * 2. Push the current PC, i.e. the return address
 * 3. Push the magic value 0x200
 * 4. Set the PC to the sub-routine address
 * 
 * When the RTS call is made, the PC will be set to 0x200, triggering a read to
 * the addresses 0x200 and 0x201. This will hit the magic memory area 
 * registered for this purpose, resulting in calls to magic_xbios_supexec_read.
 * When 0x201 is called, the PC is popped from the stack before the supervisor
 * mode is disabled, PC updated and D0 set to 0 (the XBIOS return code for no
 * error).  The instruction at 0x200 will be executed before the PC update
 * takes effect, so the memory reads return a NOP at that address.
 */
uint32_t XBIOS_Supexec()
{
    uint32_t lv0 = peek_u32(2);

    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", lv0);
    }
    
    save_regs();

    enable_supervisor_mode();
    push_u32(m68k_get_reg(0, M68K_REG_PC));
    push_u32(0x200);
    m68k_set_reg(M68K_REG_PC, lv0);

    return 0;
}

/* Magic memory for supexec */
uint8_t magic_xbios_supexec_read(struct _memarea *area, uint32_t address)
{
    uint32_t lv0;
    printf("ADDRESS: 0x%x\n", address);
    if (address == 0x200)
        return 0x4e;
    else if (address == 0x201)
    {
        lv0 = pop_u32();
        disable_supervisor_mode();
        m68k_set_reg(M68K_REG_PC, lv0);
        restore_regs();
        return 0x71;
    }
    
    return 0;
}

/* Protection for magic memory for supexec */
void magic_xbios_supexec_write(struct _memarea *area, uint32_t address, uint8_t value)
{
    printf("Attempted to write to magic memory at 0x%x\n", address);
    halt_execution();
}



/* Table of non-implemented XBIOS functions */

#define XBIOS_Bconmap NULL
#define XBIOS_Bioskeys NULL
#define XBIOS_Blitmode NULL
#define XBIOS_Buffoper NULL
#define XBIOS_Buffptr NULL
#define XBIOS_Cursconf NULL
#define XBIOS_Dbmsg NULL
#define XBIOS_Devconnect NULL
#define XBIOS_DMAread NULL
#define XBIOS_DMAwrite NULL
#define XBIOS_Dosound NULL
#define XBIOS_Dsp_Available NULL
#define XBIOS_Dsp_BlkBytes NULL
#define XBIOS_Dsp_BlkHandShake NULL
#define XBIOS_Dsp_BlkUnpacked NULL
#define XBIOS_Dsp_BlkWords NULL
#define XBIOS_Dsp_DoGlock NULL
#define XBIOS_Dsp_ExecBoot NULL
#define XBIOS_Dsp_ExecProg NULL
#define XBIOS_Dsp_FlushSubroutines NULL
#define XBIOS_Dsp_GetProgAbility NULL
#define XBIOS_Dsp_GetWordSize NULL
#define XBIOS_Dsp_Hf0 NULL
#define XBIOS_Dsp_Hf1 NULL
#define XBIOS_Dsp_Hf2 NULL
#define XBIOS_Dsp_Hf3 NULL
#define XBIOS_Dsp_HStat NULL
#define XBIOS_Dsp_InqSubrAbility NULL
#define XBIOS_Dsp_InStream NULL
#define XBIOS_Dsp_IOStream NULL
#define XBIOS_Dsp_LoadProg NULL
#define XBIOS_Dsp_LoadSubroutine NULL
#define XBIOS_Dsp_Lock NULL
#define XBIOS_Dsp_LodToBunary NULL
#define XBIOS_Dsp_MultBlocks NULL
#define XBIOS_Dsp_OutStream NULL
#define XBIOS_Dsp_RemoveInterrupts NULL
#define XBIOS_Dsp_RequestUniqueAbility NULL
#define XBIOS_Dsp_Reserve NULL
#define XBIOS_Dsp_RunSubroutine NULL
#define XBIOS_Dsp_SetVectors NULL
#define XBIOS_Dsp_TriggerHC NULL
#define XBIOS_Dsp_Unlock NULL
#define XBIOS_Dsptristate NULL
#define XBIOS_EgetPalette NULL
#define XBIOS_EgetShift NULL
#define XBIOS_EsetBank NULL
#define XBIOS_EsetColor NULL
#define XBIOS_EsetGray NULL
#define XBIOS_EsetPalette NULL
#define XBIOS_EsetShift NULL
#define XBIOS_EsetSmear NULL
#define XBIOS_Flopfmt NULL
#define XBIOS_Floprate NULL
#define XBIOS_Floprd NULL
#define XBIOS_Flopver NULL
#define XBIOS_Flopwr NULL
#define XBIOS_Gettime NULL
#define XBIOS_Glaccess NULL
#define XBIOS_Gpio NULL
#define XBIOS_Ikbdws NULL
#define XBIOS_Initmous NULL
#define XBIOS_Iorec NULL
#define XBIOS_Jdisint NULL
#define XBIOS_Jenabint NULL
#define XBIOS_Kbdvbase NULL
#define XBIOS_Kbrate NULL
#define XBIOS_Keytbl NULL
#define XBIOS_Locksnd NULL
#define XBIOS_Logbase NULL
#define XBIOS_Metainit NULL
#define XBIOS_Mfpint NULL
#define XBIOS_Midiws NULL
#define XBIOS_NVMaccess NULL
#define XBIOS_Offgibit NULL
#define XBIOS_Ongibit NULL
#define XBIOS_Physbse NULL
#define XBIOS_Protobt NULL
#define XBIOS_Prtblk NULL
#define XBIOS_Puntaes NULL
#define XBIOS_Random NULL
#define XBIOS_Rsconf NULL
#define XBIOS_Scrdmp NULL
#define XBIOS_Setbuffer NULL
#define XBIOS_Setcolor NULL
#define XBIOS_Setinterrupt NULL
#define XBIOS_Setmode NULL
#define XBIOS_Setmontracks NULL
#define XBIOS_Setpalette NULL
#define XBIOS_Setprt NULL
#define XBIOS_Setscreen NULL
#define XBIOS_Settime NULL
#define XBIOS_Settracks NULL
#define XBIOS_Sndstatus NULL
#define XBIOS_Soundcmd NULL
#define XBIOS_Ssbrk NULL
#define XBIOS_Unlocksnd NULL
#define XBIOS_VgetMonitor NULL
#define XBIOS_VgetRGB NULL
#define XBIOS_VgetSize NULL
#define XBIOS_VsetMask NULL
#define XBIOS_VsetMode NULL
#define XBIOS_VsetRGB NULL
#define XBIOS_VsetScreen NULL
#define XBIOS_VsetSync NULL
#define XBIOS_Vsync NULL
#define XBIOS_WavePlay NULL
#define XBIOS_Xbtimer NULL

/* XBIOS function table according to
 * http://www.yardley.cc/atari/compendium/atari-compendium-XBIOS-Function-Reference.htm
 */
struct XBIOS_function {
    char *name;
    uint32_t (*fnct)();
    uint16_t id;
};

struct XBIOS_function XBIOS_functions[] = {
    {"Bconmap", XBIOS_Bconmap, 0x2C},
    {"Bioskeys", XBIOS_Bioskeys, 0x18},
    {"Blitmode", XBIOS_Blitmode, 0x40},
    {"Buffoper", XBIOS_Buffoper, 0x88},
    {"Buffptr", XBIOS_Buffptr, 0x8D},
    {"Cursconf", XBIOS_Cursconf, 0x15},
    {"Dbmsg", XBIOS_Dbmsg, 0x0B},
    {"Devconnect", XBIOS_Devconnect, 0x8B},
    {"DMAread", XBIOS_DMAread, 0x2A},
    {"DMAwrite", XBIOS_DMAwrite, 0x2B},
    {"Dosound", XBIOS_Dosound, 0x20},
    {"Dsp_Available", XBIOS_Dsp_Available, 0x6A},
    {"Dsp_BlkBytes", XBIOS_Dsp_BlkBytes, 0x7C},
    {"Dsp_BlkHandShake", XBIOS_Dsp_BlkHandShake, 0x61},
    {"Dsp_BlkUnpacked", XBIOS_Dsp_BlkUnpacked, 0x62},
    {"Dsp_BlkWords", XBIOS_Dsp_BlkWords, 0x7B},
    {"Dsp_DoGlock", XBIOS_Dsp_DoGlock, 0x60},
    {"Dsp_ExecBoot", XBIOS_Dsp_ExecBoot, 0x6E},
    {"Dsp_ExecProg", XBIOS_Dsp_ExecProg, 0x6D},
    {"Dsp_FlushSubroutines", XBIOS_Dsp_FlushSubroutines, 0x73},
    {"Dsp_GetProgAbility", XBIOS_Dsp_GetProgAbility, 0x72},
    {"Dsp_GetWordSize", XBIOS_Dsp_GetWordSize, 0x67},
    {"Dsp_Hf0", XBIOS_Dsp_Hf0, 0x77},
    {"Dsp_Hf1", XBIOS_Dsp_Hf1, 0x78},
    {"Dsp_Hf2", XBIOS_Dsp_Hf2, 0x79},
    {"Dsp_Hf3", XBIOS_Dsp_Hf3, 0x7A},
    {"Dsp_HStat", XBIOS_Dsp_HStat, 0x7D},
    {"Dsp_InqSubrAbility", XBIOS_Dsp_InqSubrAbility, 0x75},
    {"Dsp_InStream", XBIOS_Dsp_InStream, 0x63},
    {"Dsp_IOStream", XBIOS_Dsp_IOStream, 0x65},
    {"Dsp_LoadProg", XBIOS_Dsp_LoadProg, 0x6C},
    {"Dsp_LoadSubroutine", XBIOS_Dsp_LoadSubroutine, 0x74},
    {"Dsp_Lock", XBIOS_Dsp_Lock, 0x68},
    {"Dsp_LodToBunary", XBIOS_Dsp_LodToBunary, 0x6F},
    {"Dsp_MultBlocks", XBIOS_Dsp_MultBlocks, 0x7F},
    {"Dsp_OutStream", XBIOS_Dsp_OutStream, 0x64},
    {"Dsp_RemoveInterrupts", XBIOS_Dsp_RemoveInterrupts, 0x66},
    {"Dsp_RequestUniqueAbility", XBIOS_Dsp_RequestUniqueAbility, 0x71},
    {"Dsp_Reserve", XBIOS_Dsp_Reserve, 0x6B},
    {"Dsp_RunSubroutine", XBIOS_Dsp_RunSubroutine, 0x76},
    {"Dsp_SetVectors", XBIOS_Dsp_SetVectors, 0x7E},
    {"Dsp_TriggerHC", XBIOS_Dsp_TriggerHC, 0x70},
    {"Dsp_Unlock", XBIOS_Dsp_Unlock, 0x69},
    {"Dsptristate", XBIOS_Dsptristate, 0x89},
    {"EgetPalette", XBIOS_EgetPalette, 0x55},
    {"EgetShift", XBIOS_EgetShift, 0x51},
    {"EsetBank", XBIOS_EsetBank, 0x52},
    {"EsetColor", XBIOS_EsetColor, 0x53},
    {"EsetGray", XBIOS_EsetGray, 0x56},
    {"EsetPalette", XBIOS_EsetPalette, 0x54},
    {"EsetShift", XBIOS_EsetShift, 0x50},
    {"EsetSmear", XBIOS_EsetSmear, 0x57},
    {"Flopfmt", XBIOS_Flopfmt, 0x0A},
    {"Floprate", XBIOS_Floprate, 0x29},
    {"Floprd", XBIOS_Floprd, 0x08},
    {"Flopver", XBIOS_Flopver, 0x13},
    {"Flopwr", XBIOS_Flopwr, 0x09},
    {"Getrez",      XBIOS_Getrez, 0x04},
    {"Gettime", XBIOS_Gettime, 0x17},
    {"Glaccess", XBIOS_Glaccess, 0x1C},
    {"Gpio", XBIOS_Gpio, 0x8A},
    {"Ikbdws", XBIOS_Ikbdws, 0x19},
    {"Initmous", XBIOS_Initmous, 0x00},
    {"Iorec", XBIOS_Iorec, 0x0E},
    {"Jdisint", XBIOS_Jdisint, 0x1A},
    {"Jenabint", XBIOS_Jenabint, 0x1B},
    {"Kbdvbase", XBIOS_Kbdvbase, 0x22},
    {"Kbrate", XBIOS_Kbrate, 0x23},
    {"Keytbl", XBIOS_Keytbl, 0x10},
    {"Locksnd", XBIOS_Locksnd, 0x80},
    {"Logbase", XBIOS_Logbase, 0x03},
    {"Metainit", XBIOS_Metainit, 0x30},
    {"Mfpint", XBIOS_Mfpint, 0x0D},
    {"Midiws", XBIOS_Midiws, 0x0C},
    {"NVMaccess", XBIOS_NVMaccess, 0x2E},
    {"Offgibit", XBIOS_Offgibit, 0x1D},
    {"Ongibit", XBIOS_Ongibit, 0x1E},
    {"Physbse", XBIOS_Physbse, 0x02},
    {"Protobt", XBIOS_Protobt, 0x12},
    {"Prtblk", XBIOS_Prtblk, 0x24},
    {"Puntaes", XBIOS_Puntaes, 0x27},
    {"Random", XBIOS_Random, 0x11},
    {"Rsconf", XBIOS_Rsconf, 0x0F},
    {"Scrdmp", XBIOS_Scrdmp, 0x14},
    {"Setbuffer", XBIOS_Setbuffer, 0x83},
    {"Setcolor", XBIOS_Setcolor, 0x07},
    {"Setinterrupt", XBIOS_Setinterrupt, 0x87},
    {"Setmode", XBIOS_Setmode, 0x84},
    {"Setmontracks", XBIOS_Setmontracks, 0x86},
    {"Setpalette", XBIOS_Setpalette, 0x06},
    {"Setprt", XBIOS_Setprt, 0x21},
    {"Setscreen", XBIOS_Setscreen, 0x05},
    {"Settime", XBIOS_Settime, 0x16},
    {"Settracks", XBIOS_Settracks, 0x85},
    {"Sndstatus", XBIOS_Sndstatus, 0x8C},
    {"Soundcmd", XBIOS_Soundcmd, 0x82},
    {"Ssbrk", XBIOS_Ssbrk, 0x01},
    {"Supexec", XBIOS_Supexec, 0x26},
    {"Unlocksnd", XBIOS_Unlocksnd, 0x81},
    {"VgetMonitor", XBIOS_VgetMonitor, 0x59},
    {"VgetRGB", XBIOS_VgetRGB, 0x5E},
    {"VgetSize", XBIOS_VgetSize, 0x5B},
    {"VsetMask", XBIOS_VsetMask, 0x92},
    {"VsetMode", XBIOS_VsetMode, 0x58},
    {"VsetRGB", XBIOS_VsetRGB, 0x5D},
    {"VsetScreen", XBIOS_VsetScreen, 0x05},
    {"VsetSync", XBIOS_VsetSync, 0x5A},
    {"Vsync", XBIOS_Vsync, 0x25},
    {"WavePlay", XBIOS_WavePlay, 0xA5},
    {"Xbtimer", XBIOS_Xbtimer, 0x1F}
};

void xbios_trap()
{
    uint16_t fnct = peek_u16(0);
    int i;
    
    for(i=0; i<=sizeof(XBIOS_functions)/sizeof(struct XBIOS_function); ++i) {
        if (XBIOS_functions[i].id == fnct) {
            if (XBIOS_functions[i].fnct) {
                m68k_set_reg(M68K_REG_D0, XBIOS_functions[i].fnct());
            } else {
                halt_execution();
                printf("XBIOS %s (0x%x) not implemented\n", XBIOS_functions[i].name, fnct);
            }
            
            return;
        }
    }
            
    halt_execution();
    printf("XBIOS Unknown function called 0x%x\n", fnct);
}
