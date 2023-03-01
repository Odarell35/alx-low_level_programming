#include "main.h"

/**
 * _strncat - concatenates two strings with certain number of characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_dest;
	int i;

	i = 0;
	length_dest = 0;
	while (dest[i] != '\0')
	{
		length_dest++;
		i++;
	}
	n = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length_dest + i] = src[i];
		dest[length_dest + i] = '\0';
	}
return (dest);
}
