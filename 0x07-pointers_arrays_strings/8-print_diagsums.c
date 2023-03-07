#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, total1 = 0, total2 = 0, n;

	for (i = 0; i < (size * size); i++)
	{
		for (n = size - 1; n < (size * size); i++)
			total1 = total1 + a[i];

	for (n = size - 1; n < ((size * size) - size); n = n + size - 1) 
			total2 = total2 + a[n];
			}
	printf("%d,%d\n", total1, total2);
}
