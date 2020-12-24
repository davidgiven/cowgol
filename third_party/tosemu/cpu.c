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

#include "cpu.h"

#include "utils.h"
#include "m68k.h"

void enable_supervisor_mode()
{
    m68k_set_reg(M68K_REG_SR, m68k_get_reg(0, M68K_REG_SR) | 0x2000); /* set the CPU in supervisor mode */
}

void disable_supervisor_mode()
{
    m68k_set_reg(M68K_REG_SR, m68k_get_reg(0, M68K_REG_SR) & (~0x2000)); /* set the CPU in supervisor mode */
}

int is_supervisor_mode_enabled()
{
    if ((m68k_get_reg(0, M68K_REG_SR) & 0x2000) == 0x2000) {
        return 1;
    } else {
        return 0;
    }
}

void push_u16(uint16_t value)
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    sp -= 2;
    m68k_write_memory_16(sp, value);
    m68k_set_reg(M68K_REG_A7, sp);
}

void push_u32(uint32_t value)
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    sp -= 4;
    m68k_write_memory_32(sp, value);
    m68k_set_reg(M68K_REG_A7, sp);
}

uint16_t pop_u16()
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    uint16_t value = m68k_read_disassembler_16(sp);
    sp += 2;
    m68k_set_reg(M68K_REG_A7, sp);
    return value;
}

uint32_t pop_u32()
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    uint16_t value = m68k_read_disassembler_32(sp);
    sp += 4;
    m68k_set_reg(M68K_REG_A7, sp);
    return value;
}

uint8_t peek_u8(int offset)
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    return m68k_read_disassembler_8(sp+offset);
}

uint16_t peek_u16(int offset)
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    return m68k_read_disassembler_16(sp+offset);
}

uint32_t peek_u32(int offset)
{
    uint32_t sp = m68k_get_reg(0, M68K_REG_A7);
    return m68k_read_disassembler_32(sp+offset);
}

int8_t peek_s8(int offset)
{
    return (int8_t)peek_u8(offset);
}

int16_t peek_s16(int offset)
{
    return (int16_t)peek_u16(offset);
}

int32_t peek_s32(int offset)
{
    return (int32_t)peek_u32(offset);
}
