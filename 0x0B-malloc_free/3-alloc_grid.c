#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= height; j++)
				free(grid[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
