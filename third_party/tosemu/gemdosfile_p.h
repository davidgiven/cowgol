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

#ifndef GEMDOSFILE_H
#define GEMDOSFILE_H

#include <stdint.h>

#include "tossystem.h"

/* GEMDOS functions */

void gemdos_file_init(struct tos_environment *);
void gemdos_file_free();

uint32_t GEMDOS_Dgetdrv();

uint32_t GEMDOS_Fseek();
uint32_t GEMDOS_Fdatime();
uint32_t GEMDOS_Fgetdta();
uint32_t GEMDOS_Fsetdta();
uint32_t GEMDOS_Fsfirst();
uint32_t GEMDOS_Fsnext();
uint32_t GEMDOS_Fopen();
uint32_t GEMDOS_Fclose();
uint32_t GEMDOS_Fread();
uint32_t GEMDOS_Fwrite();
uint32_t GEMDOS_Dgetpath();
uint32_t GEMDOS_Dsetpath();
uint32_t GEMDOS_Dcreate();
uint32_t GEMDOS_Fcreate();
uint32_t GEMDOS_Fdelete();
uint32_t GEMDOS_Fattrib();

#endif /* GEMDOSFILE_H */
