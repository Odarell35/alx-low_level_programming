#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates 2D array of integes
 * @width: row number
 * @height: column number
 * Return: pointer to 2D array, NULL to failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int *) * height);
			if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
