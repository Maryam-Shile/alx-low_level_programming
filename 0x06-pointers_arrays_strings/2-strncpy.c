#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies strings to strings
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
