#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion -prints string in reverse
 * @s: string to be printed
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(s[i]);
}
