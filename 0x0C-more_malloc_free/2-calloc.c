#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - implementation of calloc with malloc
 * @nmemb: member of array
 * @size: data type
 * Return: return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return ((void *)arr);
}
