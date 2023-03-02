#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n:  is the number of elements of the array
 * @a: array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temporary;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temporary = a[j];
			a[j] =  a[j - 1];
			a[j - 1] = temporary;
		}
	}
}
