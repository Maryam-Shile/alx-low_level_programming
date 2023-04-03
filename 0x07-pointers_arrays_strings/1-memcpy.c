#include <stdio.h>
#include "main.h"

/**
 *_memcpy - copies bytes from memory data 
 *@src: point to source file
 *@dest: pointer to dest file
 *@n: size of n byte
 *@Return: returnds dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
