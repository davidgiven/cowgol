/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdlib.h>
#include "list.h"

List::List()
{
  max = 10;
  count = 0;
  list = (void **)malloc(10 * sizeof(void *));
}

void
List::add(void *x)
{
  if (count >= max)
  {
    max += 100;
    list = (void **)realloc(list, max * sizeof(void *));
  }
  list[count++] = x;
}
