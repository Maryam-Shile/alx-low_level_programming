#include <stdio.h>
#include "main.h"

/**
 * _strncat - appends strings to strings
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d, len_s;

	len_d = 0;
	len_s = 0;
	while (*(dest + len_d) != '\0')
	{
		++len_d;
	}
	while (len_s < n && src[len_s] != '\0')
	{
		dest[len_d] = src[len_s];
		len_s++;
		++len_d;
	}
		dest[len_d + 1] = '\0';
	return (dest);
}
