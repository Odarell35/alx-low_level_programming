#include "main.h"
/**
 * int _isalpha(int c) - checks for alphabetic character.
 * @c - character from ASCII code
 * Return 1 if c is a letter, lowercase or uppercase.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
