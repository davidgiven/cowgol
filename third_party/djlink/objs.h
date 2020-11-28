/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include "list.h"
#include "omf.h"

struct Symbol;

struct ExtSymDef {
  char *name; // quark
  int size; // 0 == not "common"
  Symbol *symbol;
};

struct Obj {
  char *name;
  unsigned char *bytes;
  int len;
  unsigned char **records; // null terminated
  List names;		// quarks
  List grouprefs;	// point to group
  List segfrags;	// point to segfrag
  List extsyms;		// point to extsymdef
  List pubsyms;		// point to symbol

  int optional;		// nonzero if unused from library
  int resolved;		// nonzero if externs have been resolved
  int gotsyms;		// nonzero if symbols have been noted

  Obj(char *filename, unsigned char *bytes, int len);
};

extern List objs;

void	load_object(char *name);
void	gather_used_objects();
