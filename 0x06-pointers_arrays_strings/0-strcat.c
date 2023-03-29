#include <stdio.h>
#include "main.h"

/**
 * _strcat - appends strings to strings
 * @dest: pointer variable
 * @src: pointer variable
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int len_d, len_s;

	len_d = 0;
	len_s = 0;
	while (*(dest + len_d) != '\0')
	{
		++len_d;
	}
	while (*(src + len_s) != '\0')
	{
		*(dest + len_d) = *(src + len_s);
		++len_d;
		++len_s;
	}
	*(dest + len_d) = '\0';
	char* result;
	*result = *dest;
	return (result);
}
