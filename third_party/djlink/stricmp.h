/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#ifndef _stricmp_h_
#define _stricmp_h_

/* Not all systems have one of these */

int dj_stricmp(const char *s1, const char *s2);
#define stricmp dj_stricmp

#endif
