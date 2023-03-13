#include "main.h"

/**
 * free_grid - frees 2d grid created by alloc_grid function
 * @grid: grid to free
 * @height: this is the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
