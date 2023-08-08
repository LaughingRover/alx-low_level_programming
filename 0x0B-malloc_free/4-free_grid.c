#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function.
 * @grid: 2D array
 * @height: amount of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

