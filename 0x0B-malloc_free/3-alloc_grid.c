#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory to 2-D array
 * @width: row
 * @height: column
 * Return:pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * width);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
