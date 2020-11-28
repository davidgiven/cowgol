/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
  if (argc < 3)
  {
    printf("Usage: bindiff file1 file2\n");
    exit(1);
  }

  FILE *f1 = fopen(argv[1], "rb");
  FILE *f2 = fopen(argv[2], "rb");

  if (!f1)
  {
    perror(argv[1]);
    exit(1);
  }

  if (!f2)
  {
    perror(argv[2]);
    exit(1);
  }

  int loc = -1;
  if (strcmp(argv[1]+strlen(argv[1])-4, ".com") == 0)
    loc = 0xff;

  while (1) {
    loc++;
    int c1 = fgetc(f1);
    int c2 = fgetc(f2);

    if (c1 == EOF && c2 == EOF)
      break;

    if (c1 == EOF)
    {
      printf("%s is bigger\n", argv[2]);
      break;
    }

    if (c2 == EOF)
    {
      printf("%s is bigger\n", argv[1]);
      break;
    }

    if (c1 == c2)
      continue;

    // bytes differ, print up to 16 of them.

    int d1[16], d2[16], diff, i;
    d1[0] = c1;
    d2[0] = c2;
    diff = 1;
    while (diff < 16)
    {
      int c1 = fgetc(f1);
      int c2 = fgetc(f2);
      if (c1 == EOF || c2 == EOF)
	break;
      if (c1 == c2)
	break;
      d1[diff] = c1;
      d2[diff] = c2;
      diff++;
    }

    printf("%05x:  ", loc);
    for (i=0; i<diff; i++)
      printf("%02x ", d1[i]);
    for (i=0; i<diff; i++)
      printf("%c", isgraph(d1[i]) ? d1[i] : '°');
    printf("\n");

    printf("        ");
    for (i=0; i<diff; i++)
      printf("%02x ", d2[i]);
    for (i=0; i<diff; i++)
      printf("%c", isgraph(d2[i]) ? d2[i] : '°');
    printf("\n");

    loc += diff;
  }

  return 0;
}
