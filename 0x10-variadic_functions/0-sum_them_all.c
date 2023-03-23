#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum of all its parameters.
 *@n: number of arguments
 *@...: variable arguments
 *Return: 0 no arguments, value offunction
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, const unsigned int);
	}
	va_end(numbers);
	return (sum);
}
