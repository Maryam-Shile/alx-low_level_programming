#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees allocated memory
 * @grid: memory location
 * @height: columns
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height, j++)
	{
		free(grid[j]);
	}
	free(grid);
	return (0);
}
