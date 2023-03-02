#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;		
	for (i = 0; i < n && i != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}
return (dest);
}
