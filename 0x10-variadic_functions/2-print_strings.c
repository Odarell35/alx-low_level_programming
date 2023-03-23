#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: is string to be printed between the strings
 *@n: is  number of strings passed to the function
 *If separator is NULL, don’t print it
 *If one of the string is NULL, print (nil) instead
 *Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list block;
	char *string;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(block, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(block, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		printf("%s", string);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(block);
}

