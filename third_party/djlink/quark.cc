/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/*
** There are two reasons why this module exists:
**
** 1. To provide a portable replacement for strdup()
** 2. To make string comparisons very fast.
**
** Whenever you need to save a copy of a string, you call
** quark(string) to get a pointer to a permanent copy.
** Since two strings with the same characters will return
** the same pointer, you can compare pointers instead of
** the whole string to see if they're the same.
*/

#include <string.h>
#include <stdlib.h>

struct hashent {
  hashent *next;
  char *string;
};

static struct hashent *hashtab[4096];

static int
hash(char *s)
{
  int rv = 0;
  while (*s) {
    rv <<= 1;
    rv ^= *s++;
    rv ^= (rv>>10);
  }
  return rv & 4095;
}

char *
quark(char *string)
{
  if (!string) return 0;
  int h = hash(string);
  hashent *he;

  for (he=hashtab[h]; he; he=he->next)
    if (strcmp(string, he->string) == 0)
      return he->string;
  he = new hashent;
  he->next = hashtab[h];
  hashtab[h] = he;
  he->string = new char[strlen(string)+1];
  strcpy(he->string, string);
  return he->string;
}

char *
quark(void *ptr, int len)
{
  /* Yes, it's hokey, but it will always
     work for our cases. */
  char *string = (char *)ptr;
  int tmp = string[len];
  string[len] = 0;
  char *rv = quark(string);
  string[len] = tmp;
  return rv;
}
