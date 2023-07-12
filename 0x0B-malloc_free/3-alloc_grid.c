#include "main.h"
/**
 * alloc_grid - function to allocate memory for a two dimantional array
 * @width: of the grid
 * @height: of the grid
 * Return: poiter to the array, NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **grid;

	grid = malloc(sizeof(int *) * height);
	if (height <= 0 || width <= 0 || grid == 0)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(**grid) * width);
		if (grid[h] == 0)
		{
			while (h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
