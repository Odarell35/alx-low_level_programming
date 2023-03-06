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
	int i;
	int length_string;
	int l;
	/*c[53] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ";*/

	length_string = 0;
	l = 0;
	while (s[l] != '\0')
	{
		length_string++;
			l++;
	}
	for (i = 0; i < length_string; i++)
		if (s[i] == c)
			break;
return (s);
	if (s[i] != c)
return (NULL);
}

