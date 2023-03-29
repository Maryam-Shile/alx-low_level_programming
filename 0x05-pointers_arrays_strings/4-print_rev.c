#include <stdio.h>
#include "main.h"

/**
 * str_len - check the code
 * Description: prints reverse string
 * @ptr: pointer
 * @x
 * Return: Always 0.
 */

int str_len(char *ptr)
{
	int x;

	x = 0;
	while (*ptr != '\0')
	{
		x++;
		ptr++;
	}
	return (x);
}

/**
 * print_rev - see description
 * Description : prints strings in reverse
 * @len
 * @s: pointer
 * @i
 * Returns: always 0
 */

void print_rev(char *s)
{
	int i, len;

	len = str_len(s);
	i = len - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
