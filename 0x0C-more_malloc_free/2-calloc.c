#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocate memory
 * @nmemb: size of memory
 * @size: type of memory
 * Return: returns pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *num;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	num = malloc(size * nmemb);
	if (num == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		num[i] = 0;
	}
	return (num);
}

