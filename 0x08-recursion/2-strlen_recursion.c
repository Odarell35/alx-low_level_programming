#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int string_length = 0;

	if (*s == '\0')
	{
		return (0);
		string_length = 1 + _strlen_recursion(s + 1);
	}
return (string_length);
}

