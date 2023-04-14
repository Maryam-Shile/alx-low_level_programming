#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - range of numbers
 * @min: mimimum number
 * @max: maximum number
 * Return: return array
 */

int *array_range(int min, int max)
{
	int len, j, i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = min; j <= max; j++)
	{
		arr[i] = j;
		i++;
	}
	return (arr);
}
