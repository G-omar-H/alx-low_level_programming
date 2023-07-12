#include "main.h"
/**
 * free_grid - free memory already alloxated for a 2D array
 * @grid: array
 * @height: of the array
 * Return: 0
*/
void free_grid(int **grid, int height)
{
	int h;

	for (h = height - 1; h >= 0; h--)
	{
		free(grid[h]);
	}
	free(grid);
}
