#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated to a 2D grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 *
 * Return: .
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height <= 0)
		return;
	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
