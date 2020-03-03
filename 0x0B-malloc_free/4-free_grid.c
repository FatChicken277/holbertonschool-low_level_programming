#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously created.
 *@height: height.
 *@grid: 2 dimensional array.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
