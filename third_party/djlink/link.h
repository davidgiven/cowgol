/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/* These describe the linked image */

#include "list.h"

struct SegList {
  char *name;
  int size;
  int offset;
  int offset_in_group;
};

extern List seg_list;
