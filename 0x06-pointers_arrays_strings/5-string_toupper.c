#include <stdio.h>
#include "main.h"

/**
*string_toupper - prints uppercase equivalent
*@s: pointer variable
* Return: always 0
*/

char *string_toupper(char *s)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == j)
			{
				s[i] = j - 32;
			}
		}
	}
	return (s);
}


