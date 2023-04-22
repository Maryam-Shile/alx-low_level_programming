#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: array
 * @size: array size
 * @action: pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
