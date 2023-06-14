#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string to a newly allocated space
 * @str: string to be copied
 * Return: returns a pointer to new  space
 */

char *_strdup(char *str)
{
	int i;
	char *new;
	int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	new = (char *)malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new[i] = str[i];
	}
	return (new);
	free(new);
}
