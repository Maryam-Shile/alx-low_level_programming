#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates stings to point n
 * @s1: first string
 * @s2: second string
 * @n: stops at n in second string
 * Return: return pointer =
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	mem = malloc(strlen(s1) + n + 1);

	if (mem == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		mem[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
			mem[i] = s2[j];
	}
	for (j = 0; j < n; j++)
	{
		mem[i] = s2[j];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
