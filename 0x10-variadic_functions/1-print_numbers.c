#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - a function that prints numbers,
 *@separator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: If separator is NULL, return 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list block;
	unsigned int i;
	unsigned int numbers;

	if (separator != NULL)

	va_start(block, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(block, const unsigned int);
	printf("%d", numbers);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(block);
}
