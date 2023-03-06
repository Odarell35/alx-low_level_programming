#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string with character to be matched with
 * Return: s that match the character or NULL for no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				break;
	}
	if (s[i] == '\0')
		return (NULL);
return (s);
			/*else
			return (NULL);*/
}
