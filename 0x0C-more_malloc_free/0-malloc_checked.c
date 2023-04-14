#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - tries the exit command
 * @b: number of data
 * Return: returns array
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (int *)malloc(b * sizeof(unsigned int));
	if (arr == NULL)
	{
		exit(98);
	}
	return ((void *)arr);
}
