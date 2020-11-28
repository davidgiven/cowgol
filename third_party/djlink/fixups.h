/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#ifndef _fixups_h_
#define _fixups_h_

struct Symbol;
struct Obj;
struct SegFrag;

struct FixupInfo {
  int frame_addr;
  int target_addr;
  Symbol *symbol_used;
};

unsigned char *fixup_info(unsigned char *, FixupInfo *, Obj *, SegFrag *);

void do_fixups();

#endif
