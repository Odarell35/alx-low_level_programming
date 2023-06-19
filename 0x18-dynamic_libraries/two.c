#include "main.h"
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
/**
 * _strstr -  a function that locates a string in a string.
 * @haystack: string
 * @needle: string to look for in haystack
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
/**
 * _strcpy - copies
 * @dest: destination
 * @src: source
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
/**
 * _strspn - calculates the length of the initial segment
 * entirely of characters from a given set of characters.
 * @s: string
 * @accept: containing the characters to search for
 * Return: length of the initial substring of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;
	const char *p = s;

	while (*p != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
		if (*p == *a)
		{
		count++;
		break;
		}
			a++;
		}

	if (*a == '\0')
	{
		break;
	}
		p++;
	}

	return (count);
}
/**
 * _puts - main function
 * @s: used for string pointer
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
