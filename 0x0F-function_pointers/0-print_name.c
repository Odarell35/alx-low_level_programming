#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: input name to print
 * @f: function pointer
 * Return: name or nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
