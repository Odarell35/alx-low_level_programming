#include "main.h"
#include <stdio.h>
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

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);
			if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			free(grid[i]);
			free(grid);
			return (NULL);
		}
		
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
