#include <stdio.h>
#include "main.h"

/**
 *_strchr - main function
 *@s: pointer s
 *@c: character
 *Return: when successful
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
