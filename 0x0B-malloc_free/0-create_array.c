#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and allocates memory to it
 * @size: array size
 * @c: initial variable
 * Return: returns array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
