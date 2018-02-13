#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2d grid
 * @grid: the grid
 * @height: height
 */
void free_grid(int **grid, int height)
{

	int i;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);



}
