#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * print_binary - prints binary representative of number
 * @n: number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int comp;
	unsigned long int i;
	bool manyzeros = true;

	if (n == 0)
		putchar('0');
	comp = (1UL << ((sizeof(unsigned long int)) * 8 - 1));
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & comp)
		{
			manyzeros = false;
			putchar('1');
		}
		else if (!manyzeros)
		{
			putchar('0');
		}
		comp >>= 1;
	}
}
