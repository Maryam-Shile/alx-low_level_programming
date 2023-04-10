#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - check the code
 * Description: returns the length of atring
 * @s: string parameter
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);

}
