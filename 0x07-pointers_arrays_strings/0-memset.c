#include <stdio.h>
#include "main.h"

/**
 *_memset - fills n byte of memory area
 *@s: pointer to memory area
 *@b: constant byte
 *@n: bytes
 *Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
