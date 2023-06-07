#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[i]);
	_puts_recursion(s + 1);
}
