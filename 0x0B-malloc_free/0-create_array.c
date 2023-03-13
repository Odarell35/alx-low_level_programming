#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @c: character
 * @size: size of array
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char* create_array = (char*) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		if (c == 'h')
		return(create_array + i);
	if (size == 0 || create_array == NULL)
free (create_array);
return (NULL);
}
