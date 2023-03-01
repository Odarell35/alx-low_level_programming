#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n:  is the number of elements of the array
 * @a: array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar(a[i]);
	}
}
