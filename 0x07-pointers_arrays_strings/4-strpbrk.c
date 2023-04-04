#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - finds range of matching strings
 *@s: pointer s
 *@accept: pointer accept
 *Return: returns pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *i, *j;

	for (i = s; *i != '\0'; *i++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*i == *j)
			{
				return ((char *)i);
			}
		}
	}
	return (NULL);
}
