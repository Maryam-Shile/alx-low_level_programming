#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;
	i = 0;

	while (*(str + i) != '\0')
	{
		putchar (*(str + i));
		i++;
	}
	putchar ('\n');
}

