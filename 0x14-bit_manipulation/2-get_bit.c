#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets value at a binary index
 * @n: number
 * @index: index
 * Return: returns value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	value = (n & mask) != 0;
	return (value);
}
