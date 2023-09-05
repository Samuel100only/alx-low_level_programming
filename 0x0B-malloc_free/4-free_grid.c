#include "main.h"
/**
 * free_grid - free 2D array occupied memory
 * @grid: the size of grid of the array
 * @height: the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
