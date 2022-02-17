/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/* Copied from djgpp's libc, since not all systems have one of these */

#include <ctype.h>

int
dj_stricmp(const char *s1, const char *s2)
{
  while (toupper(*s1) == toupper(*s2))
  {
    if (*s1 == 0)
      return 0;
    s1++;
    s2++;
  }
  return (int)toupper(*s1) - (int)toupper(*s2);
}
