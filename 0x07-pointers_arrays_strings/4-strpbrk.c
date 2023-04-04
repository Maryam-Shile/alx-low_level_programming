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
	char *p, *q;

	for (p = s; *p != '\0'; *p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				return ((char *)p);
			}
		}
	}
	return (NULL);
}
