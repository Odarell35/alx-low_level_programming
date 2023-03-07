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
	/*int length_string;
	int l;
	
	length_string = 0;
	l = 0;
	while (s[l] != '\0')
	{
		length_string++;
			l++;
	}*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
return (NULL);
}
