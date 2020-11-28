/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef unsigned char uchar;
#define gc() ((uchar)fgetc(f))

char *fixup_locations[] = {
  "8-bit offset  ",
  "16-bit offset ",
  "16-bit segment",
  "16:16 pointer ",
  "16-high",
  "16-bit offset ",
  "N/A",
  "N/A",
  "N/A",
  "32-bit offset ",
  "N/A",
  "16:32 pointer ",
  "N/A",
  "32-bit offset ",
  "N/A",
  "N/A"
};

char *frame_names[] = {
  "SEGDEF  ",
  "GRPDEF  ",
  "EXTDEF  ",
  "Explicit",
  "LEDATA  ",
  "Target  ",
  "N/A",
  "N/A"
};

char *target_names[] = {
  "SEGDEF+disp",
  "GRPDEF+disp",
  "EXTDEF+disp",
  "Explicit   ",
  "SEGDEF     ",
  "GRPDEF     ",
  "EXTDEF     ",
  "N/A"
};

int
main(int argc, char **argv)
{

  FILE *f = stdin;
  if (argc > 1) f = fopen(argv[1], "rb");

  if (!f) {
    printf("Can't open input file\n");
    exit(0);
  }

  int bufsz = 10;
  uchar *buf = (uchar *)malloc(10);

  int byteptr=0;
  int page_size=1;
  int rectype;
  int lname_count=1;
  int seg_count=1;
  while ((rectype = fgetc(f)) != EOF)
  {
    rectype &= 255;

    int reclen = gc();
    reclen += gc() * 256;
    byteptr += 3;

    if (reclen > bufsz)
    {
      bufsz = reclen + 100;
      buf = (uchar *)realloc(buf, bufsz);
    }
    fread(buf, 1, reclen, f);
    byteptr += reclen;

    int i;

    switch (rectype)
    {
    case 0x80:
      if (page_size)
	printf("\n-----------------------------------------------------------------------------\n");
      printf("\nTHEADR:   %.*s\n", buf[0], buf+1);
      break;

    case  0x8a:
      printf("\nMODEND\n");
      if (page_size)
      {
	while (byteptr % page_size)
	{
	  gc();
	  byteptr++;
	}
      }      
      break;

    case 0x8c:
      printf("\nEXTDEF:   ");
      i = 0;
      while (i < reclen-1)
      {
	if (i) printf("          ");
	printf("`%.*s'\n", buf[i], buf+i+1);
	i += buf[i]+2;
      }
      break;

    case 0x90:
      if (buf[1])
      {
	printf("\nPUBDEF:  [%d] [%d]  ", buf[0], buf[1]);
	i = 2;
      } else {
	i = buf[2] + 256*buf[3];
	printf("\nPUBDEF:  [%d] %04x  ", buf[0], i);
	i = 4;
      }
      while (i < reclen-1)
      {
	if (i > 4) printf("                  ");
	printf("`%.*s' %02x%02x\n", buf[i], buf+i+1,
	       buf[i+buf[i]+2], buf[i+buf[i]+1]);
	i += buf[i]+4;
      }
      break;

    case 0x96:
      printf("\nLNAMES:   ");
      for (i=0; i<reclen-1;)
      {
	if (i)
	  printf("          ");
	printf("[%03d] `%.*s'\n", lname_count++, buf[i], buf+i+1);
	i += buf[i]+1;
      }
      break;

    case 0x98:
      i = buf[1] + 256*buf[2];
      printf("\nSEGDEF:   [%d] = A=%d C=%d B=%d P=%d %04x [%d] [%d] [%d]\n",
	     seg_count++,
	     (buf[0] >> 5) & 7,
	     (buf[0] >> 2) & 7,
	     (buf[0] >> 1) & 1,
	     buf[0] & 1,
	     i, buf[3], buf[4], buf[5]);
      break;

    case 0x9a:
      printf("\nGRPDEF:   [%d] = ", buf[0]);
      for (i=1; i<reclen-1; i+=2)
	printf(" [%d]", buf[i+1]);
      printf("\n");
      break;

    case 0x9c:
      printf("\nFIXUP:   \n");
      i = 0;
      while (i < reclen-1) {
	if (buf[i] & 0x80)
	{
	  /* fixup */
	  printf("\tfix %s %03x; ", fixup_locations[(buf[i]>>2)&0x0f], (buf[i] & 0x03)*256 + buf[i+1]);
	  i += 2;
	  int fix = buf[i++];
	  if (fix & 0x80) printf(" F[%d]", (fix & 0x30)>>4);
	  else printf(" frame %s", frame_names[(fix & 0x70)>>4]);
	  if (fix & 0x08) printf(" T[%d]+%d", fix & 0x03, fix&4);
	  else printf(" target %s", target_names[fix & 0x07]);
	  if ((fix & 0xc0) == 0) printf(" frame=%d", buf[i++]);
	  if ((fix & 0x08) == 0) printf(" target=%x", buf[i++]);
	  if ((fix & 0x04) == 0) { printf(" disp=%x", buf[i]+buf[i+1]*256); i+=2; }
	  printf("\n");
	}
	else if (buf[i] & 0x40)
	{
	  /* frame */
	  printf("\tFrame [%d] %s", buf[i]&3, frame_names[(buf[i]>>2)&7]);
	  if (buf[i] & 0x10) { printf(" %d", buf[i+1]); i++; }
	  i += 1;
	  printf("\n");
	}
	else
	{
	  /* target */
	  printf("\tTarget [%d] %s or %s", buf[i]&3, target_names[(buf[i]>>2)&3], target_names[4+((buf[i]>>2)&3)]);
	  i += 1;
	  printf("\n");
	}
      }
      break;

    case 0xa0:
      i = buf[1] + 256*buf[2];
      printf("\nLEDATA:   [%d] %04x\n", buf[0], i);
      break;

    case 0xa2:
      i = buf[1] + 256*buf[2];
      printf("\nLIDATA:   [%d] %04x\n", buf[0], i);
      break;

    case 0xb0:
      printf("\nCOMDEF:   ");
      i = 0;
      while (i < reclen-1)
      {
	if (i) printf("          ");
	printf("`%.*s'", buf[i], buf+i+1);
	i += buf[i]+1;
	i++;
	int num_values=0;
	switch (buf[i++]) {
	case 0x61:
	  num_values = 2;
	  break;
	case 0x62:
	  num_values = 1;
	  break;
	}
	int value;
	while (num_values)
	{
	  switch (buf[i]) {
	  case 0x81:
	    i++;
	    value = buf[i++];
	    value += buf[i++] << 8;
	    break;
	  case 0x84:
	    i++;
	    value = buf[i++];
	    value += buf[i++] << 8;
	    value += buf[i++] << 16;
	    break;
	  case 0x88:
	    i++;
	    value = buf[i++];
	    value += buf[i++] << 8;
	    value += buf[i++] << 16;
	    value += buf[i++] << 24;
	    break;
	  default:
	    value = buf[i++];
	    break;
	  }
	  printf(" %08x", value);
	  num_values--;
	}
	printf("\n");
      }
      break;

    case 0x88:
      printf("\nCOMENT:   ");
      switch (buf[1]) {
      case 0x00:
	printf("Translator is `%.*s", reclen-3, buf+2);
	fflush(stdout);
	printf("'\n");
	break;
      case 0xa2:
	printf("Link Pass Separator\n");
	break;
      default:
	printf("\n");
	break;
      }
      break;

    case 0xf0:
      printf("\nLIBRARY\n");
      page_size = reclen + 3;
      break;
    }


    printf("%02x %04x: ", rectype, reclen);

    for (i=0; i<reclen; i++)
    {
      if (i && i%16 == 0)
	printf("\n         ");
      printf(" %02x", buf[i]);
    }
    printf("\n");
  }
  return 0;
}
