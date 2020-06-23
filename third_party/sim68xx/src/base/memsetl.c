/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * memsetl - set 'n' bytes of memory 's' to the value 'c'
 */
void *
memsetl (s, c, n)
	void *s;
	int   c;
	unsigned long n;
{
	while (n--)
		((unsigned char *) s)[n] = c;
	return s;
}

