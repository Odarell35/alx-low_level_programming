#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: pointer 
 */
void *malloc_checked(unsigned int b)
{
	unsigned int  *memory;

	memory = malloc(sizeof(unsigned int) * b);
	if (memory == NULL)
		exit (98);
	return(memory);
}
