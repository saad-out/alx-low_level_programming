#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: array given
 * @height: length of array (height)
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
