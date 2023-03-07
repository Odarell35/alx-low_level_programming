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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				break;
			}
		}
	
	
	return (haystack + i);
	}
return (NULL);
}
