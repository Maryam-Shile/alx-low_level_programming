#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allicates memory to 2d array
 * @width: row
 * @height: column
 * Return: return grid
 */

int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
