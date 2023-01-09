#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of type int previously
 * created by the malloc_grid function
 * @grid: input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
