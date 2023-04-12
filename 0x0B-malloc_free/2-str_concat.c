#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gets the length of a string
 * @n: the string var
 * Return: returns len
 */

int _strlen(char *n)
{
	int len = 0;

	while (n[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates 2 strings and
 * allocates memory to them
 * @s1: string 1
 * @s2: string 2
 * Return: returns array
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *arr;

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}
	arr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		arr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
