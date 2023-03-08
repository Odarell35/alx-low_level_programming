#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number
 * Return:  n < 0,return -1 to indicate an error
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		f = n * factorial(n - 1);
		return (f);
}
