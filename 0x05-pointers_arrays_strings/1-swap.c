#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * Description: swaps integers using pointers
 * Return: Always 0.
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
