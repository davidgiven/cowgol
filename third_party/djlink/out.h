/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#ifndef _out_h_
#define _out_h_

#include "list.h"

extern List segment_fixups;

extern int start_seg, start_ofs;

void find_start_address(void);

void write_output(char *filename);

#endif
