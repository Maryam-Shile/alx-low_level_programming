#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees array
 * @grid: grid to be freed
 * @height: columns of grid
 * return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
		free(grid[i]);
	}
	free(grid);
}
