#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list block;
	int n = 0, i = 0;
	char *sep = ", ";
	char *string;

	va_start(block, format);
	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(block, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(block, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(block, double), sep);
			break;
		case 's':
			string = va_arg(block, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", string, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(block);
}
