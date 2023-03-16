#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *range;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * ((max - min) + 1));
	if (range == NULL)
		return (NULL);
	if (max > min)
	for (i = 0; i <= max; i++)
		{
			range[i] = min;
			range++;
		}
return (range);
}
