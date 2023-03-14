#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: pointer to a 2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
		return (0);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == 0)
			return (0);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
