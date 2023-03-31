#include <stdio.h>
#include "main.h"

/**
*cap_string - capitalizes first char in a word
*@s: points to char s
*Return: always 0
*/

char *cap_string(char *s)
{
	int i, j, k;

	char sep[] = {' ', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			for (k = 97; k <= 122; k++)
			{
				if (s[i] == sep[j])
				{
					if (s[i + 1] == k)
					{
						s[i + 1] = k - 32;
					}
				}
			}
		}
	}
	return (s);

}
