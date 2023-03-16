#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_array;

	mem_array = malloc(sizeof(char) * (nmemb * size));
	if (mem_array == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
return (mem_array);
}
