#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: srting with characters to be matched with
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length_s;
	unsigned int length_accept;
	unsigned int length_prefix = 0;
	unsigned int si;
	unsigned int ai;
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		length_s++;
		i++;
	}
	j = 0;
	while (accept[j] != '\0')
	{
		length_accept++;
		j++;
	}
	for (si = 0; si < length_s; si++)
	{
		unsigned int match = 0;

		for (ai = 0; ai < length_accept; ai++)
			if (accept[ai] == s[si])
			{
				length_prefix++;
				match = 1;
			}
		if (match == 0)
			return (length_prefix);
	}
return (length_prefix);
}

