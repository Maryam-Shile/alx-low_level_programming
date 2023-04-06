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

	p = s;
	q = accept;
	while (*p != '\0')
	{
		q = accept;
		while (*q != '\0')
		{
			if (*p == *q)
			{
				return ((char *)p);
			}
		}
		p++;
		q++;
	}
	return (NULL);
}
