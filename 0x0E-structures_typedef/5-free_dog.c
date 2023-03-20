#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog -Free memory
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
