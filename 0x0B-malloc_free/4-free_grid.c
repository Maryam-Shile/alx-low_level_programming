#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees array
 * @grid: grid to be freed
 * @height: columns of grid
 * return: returns nothing
 */

void free_grid(int **grid,int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
