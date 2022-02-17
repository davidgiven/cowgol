/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#ifndef _list_h_
#define _list_h_

struct List {
  int max;
  int count;
  void **list;
  List();
  void add(void *);
};

#endif
