#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with malloc
 * @b: malloc allocates memory of its size
 * Return: returns pointer
 */

void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
