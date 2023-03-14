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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
		grid[i] = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	free (grid);
	return (grid);
}
