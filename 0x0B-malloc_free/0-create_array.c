#include "main.h"
#include <stdlib.h>
/**
 * create_array -creates an array, and initializes it with a specific char.
 * @c: character
 * @size: size of array
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
	free(arr);
}
