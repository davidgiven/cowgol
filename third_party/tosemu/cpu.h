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

#ifndef CPU_H
#define CPU_H

#include <stdint.h>

/* Enable, disable and check supervisor mode */
void enable_supervisor_mode();
void disable_supervisor_mode();
int is_supervisor_mode_enabled();

/* Push values onto the target stack.
 * Accepts arguments in host system endianess */
void push_u16(uint16_t value);
void push_u32(uint32_t value);

/* Pop values from the target stack.
 * Returns values in host system endianess */
uint16_t pop_u16();
uint32_t pop_u32();

/* Peek at the stack.
 * Returns host system endian values */
uint8_t peek_u8(int offset);
uint16_t peek_u16(int offset);
uint32_t peek_u32(int offset);

int8_t peek_s8(int offset);
int16_t peek_s16(int offset);
int32_t peek_s32(int offset);

#endif /* CPU_H */
