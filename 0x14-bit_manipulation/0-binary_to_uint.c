#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to character
 * Return: returns converted int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0, dec = 0;
	const char *p = b;

	if (b == NULL)
		return (0);
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		n++;
		p++;
	}
	for (i = 0; i < n; i++)
	{
		dec *= 2;
		if (b[i] == '1')
			dec += 1;
	}
	return (dec);
}
