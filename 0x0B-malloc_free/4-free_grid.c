#include "main.h"
#include <stdlib>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 *
 * @grid: pointer to array
 * @height: number of 2d array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;
	fr (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
