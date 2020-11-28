/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#ifndef _symbols_h_
#define _symbols_h_

#include "list.h"

struct Group;
struct Segment;
struct SegClass;
struct SegFrag;
struct Obj;

struct Symbol {
  char *name;	// quark
  char *filename;
  int sequence;
  int absolute;
  int phys_addr;
  int frame, offset;
  Obj *obj;
  Group *group;
  SegFrag *segfrag;
  int frag_offset;
  Symbol();
};

struct SymTab {
  List syms;
  SymTab();
  Symbol *get(char *name); // quark
  Symbol *add(char *name); // quark
};

extern SymTab symtab;

void relocate_symbols();
void resolve_externs();

#endif
