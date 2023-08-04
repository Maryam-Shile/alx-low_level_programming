#include <stdio.h>
#include "main.h"

/**
 * get_endianness - returns level of endianness
 * @void: nothing
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int x = 1;
	char *p;

	p = (char *)&x;
	if (*p == 1)
		return (1);
	return (0);
}
