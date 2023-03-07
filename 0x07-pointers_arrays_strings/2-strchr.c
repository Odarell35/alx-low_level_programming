#include "main.h"
#include <stddef.h>
/**
 * _strchr -  a function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: s where character appears first or NULL for non match
 */
char *_strchr(char *s, char c)
{

	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
return ('\0');
}
