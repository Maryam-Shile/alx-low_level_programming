#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over a function
 * @array: array to be iterated over
 * @size: size of array
 * @action: function to be caried out
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
