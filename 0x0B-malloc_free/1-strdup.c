#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string and allocates a space to
 * it with malloc
 * @str: source array
 * Return: returns array
 */

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *arr;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	arr = (char *)malloc(len + 1 * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
