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
	int i, num_len;
	int *range;

	if (min > max)
		return (NULL);

	num_len = (max - min) + 1;
	range = malloc(sizeof(int) * num_len);
	if (range == NULL)
		return (NULL);

	if (max > min)
		for (i = 0; i <= num_len; i++)
		{
			range[i] = min;
			min++;
		}
	return (range);
}
