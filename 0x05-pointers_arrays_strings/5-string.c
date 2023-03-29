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
 * rev_string - see description
 * Description : prints strings in reverse
 * @len
 * @s: pointer
 * @i
 * Returns: always 0
 */

void rev_string(char *s)
{
	int i, j, len;

	len = str_len(s);
	i = len - 1;


	while (i >= 0)
	{
		*(s + i) = putchar(s[i]);
		i--;

	}
	putchar('\n');
}
