#include <stdio.h>
#include "main.h"

/**
 *_strspn - copies bytes from memory data
 *@s: point to source file
 *@accept: pointer to dest file
 *Return: returns dest
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; p1++)
	{
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
			{
				break;
			}
		}
		if (*p2 == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
