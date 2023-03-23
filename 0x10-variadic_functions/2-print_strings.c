#include <stdarg.h>
#include < stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: is string to be printed between the strings
 *@n: is  number of strings passed to the function
 *If separator is NULL, don’t print it
 *If one of the string is NULL, print (nil) instead
 *Return: strings, 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;


