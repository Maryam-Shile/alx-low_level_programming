#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: element of array
 * Return: returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
		return (NULL);
	n = (char *)malloc(sizeof(char) * size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
