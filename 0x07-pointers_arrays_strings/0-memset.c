#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
