/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include "list.h"

struct Obj {
  char *name;
  void *bytes;
  int len;
  List records;
  List names;
  List segments;
  List groups;
  List extsyms;

  Obj(char *filename);
};

List objs;
