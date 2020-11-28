/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __DJGPP__
#include <crt0.h>
int _crt0_startup_flags = _CRT0_FLAG_FILL_SBRK_MEMORY | _CRT0_FLAG_FILL_DEADBEEF;
#endif

#include "objs.h"
#include "segments.h"
#include "symbols.h"
#include "fixups.h"
#include "out.h"
#include "map.h"

int
main(int argc, char **argv)
{
  char *outname = 0;
  char *mapname = 0;

  setlinebuf(stdout);

  printf("DJLINK by DJ Delorie <dj@delorie.com>, built %s\n", __DATE__);
  printf("WWW Page: http://www.delorie.com/djgpp/16bit/djlink/\n");

  while (argc > 1 && argv[1][0] == '-')
  {
    if (argc > 2 && strcmp(argv[1], "-o") == 0)
    {
      outname = argv[2];
      argv++;
      argc--;
    }
    else if (argc > 2 && strcmp(argv[1], "-m") == 0)
    {
      mapname = argv[2];
      argv++;
      argc--;
    }
    else
    {
      printf("Unknown command-line option %s\n", argv[1]);
      printf("Usage: djlink [-o outfile] [-m mapfile] file.obj [file.obj ...]\n");
      exit(1);
    }
    argv++;
    argc--;
  }

  if (argc < 2)
  {
    printf("Usage: djlink [-o outfile] [-m mapfile] file.obj [file.obj ...]\n");
    exit(1);
  }

  int i;
  for (i=1; i<argc; i++)
  {
    if (outname == 0)
    {
      outname = new char[strlen(argv[i])+5];
      strcpy(outname, argv[i]);
      char *dot = strrchr(outname, '.');
      if (dot) *dot = 0;
      strcat(outname, ".exe");
    }

    load_object(argv[i]);
  }

  resolve_externs();
  gather_used_objects();
  roll_up_alignments();
  place_segments();
  create_filler_groups();
  define_groups();
  relocate_symbols();
  do_fixups();
  find_start_address();
  write_output(outname);
  if (mapname)
    print_map(mapname);
}
