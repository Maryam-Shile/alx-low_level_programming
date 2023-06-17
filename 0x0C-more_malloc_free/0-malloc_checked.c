#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with malloc
 * @b: malloc allocates memory of its size
 * Return: returns nothing
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *num;

	num = malloc(sizeof(unsigned int) * b);
	if (num == NULL)
	{
		exit(98);
		return (NULL);
	}
	return ((unsigned int*)num);
}
