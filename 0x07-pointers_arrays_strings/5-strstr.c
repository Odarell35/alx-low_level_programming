#include "main.h"
#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: sting to be scanned
 * @needle: string to look for 
 * Return: -*haystack or NULL for no match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				haystack = &haystack[i];
				break;
			}
		}
	
	
	return (haystack);
	}
return (NULL);
}
