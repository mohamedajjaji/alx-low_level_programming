#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 *
 * @grid: pointer to the 2D grid to be freed
 * @height: height of the 2D grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
