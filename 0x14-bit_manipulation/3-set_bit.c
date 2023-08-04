#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets value of number at index
 * @n: number
 * @index: index
 * Return: return 1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | mask;
	return (1);
}
