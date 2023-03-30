#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: returns result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
