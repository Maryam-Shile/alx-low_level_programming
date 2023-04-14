#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - allocates memory to an array which
 * joins string to a n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: number of byts
 * Return: the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, len1 = 0, len2 = 0, i, j;
	char *arr;

	if (s1 != NULL)
	{
		while (*(s1 + len1) != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + len2) != '\0')
		{
			len2++;
		}
	}
	if (n >= len2)
	{
		n = len2;
	}
	len = len1 + n;
	arr = (char *)malloc((len + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		arr[i++] = s2[j];
	}
	arr[i] = '\0';
	return (arr);
}
