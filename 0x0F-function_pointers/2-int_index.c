#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches through an array for an integer
 * @array: array toloop through
 * @size: size of the array
 * @cmp: function pointer
 * Return: returns integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
