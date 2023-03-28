#include <stdio.h>
#include "main.h"

/**
 * _puts - check the code
 * Description: prints all the chars in a sentence
 * @str: pointer variable
 * @i
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

