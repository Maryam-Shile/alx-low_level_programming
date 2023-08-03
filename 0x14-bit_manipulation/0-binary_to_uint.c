#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary to be converted
 * Return: converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int mask = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		mask = mask << 1;
		mask = mask | (b[i] - '0');
		i++;
	}
	return (mask);
}
