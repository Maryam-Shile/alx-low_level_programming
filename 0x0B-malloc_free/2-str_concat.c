#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenaes 2 strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointerto concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size, size1, size2;
	char *new;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;
	new = (char *)malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		if (*s1 != '\0')
			new[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	return (new);
	free(new);
}


