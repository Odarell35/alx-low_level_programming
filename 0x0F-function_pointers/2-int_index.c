#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index -  searches for an integer.
 *@array: input array
 *@size: size of array
 *@cmp: pointer to function that compares values
 *Return: -1 if size<=0 or no match, then index if theres match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{

		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			return (index);
		}
	}
		return (-1);
}

