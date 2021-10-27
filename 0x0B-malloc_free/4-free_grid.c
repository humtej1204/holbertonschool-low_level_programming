#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocate for the gridcreated by alloc_grid()
 *
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
