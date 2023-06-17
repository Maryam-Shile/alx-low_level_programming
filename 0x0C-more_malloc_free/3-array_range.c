#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: returns pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *num;

	if (min > max)
		return (NULL);
	num = malloc(sizeof(int) * ((max - min) + 1));
	if (num == NULL)
		return (NULL);
	for (i = 0; min <=  max; i++)
	{
		num[i] = min;
		min += 1;
	}
	return (num);
}
