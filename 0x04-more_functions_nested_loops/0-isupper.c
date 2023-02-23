#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: alphabet
 *
 * Return:1 if character is uppercas, 0 if character is not
 */
int _isupper(int c)
{
	
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
