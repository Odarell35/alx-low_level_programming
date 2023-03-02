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
	int src_index;

	i = 0;
	length_dest = 0;
	while (dest[i] != '\0')
	{
		length_dest++;
		i++;
	}

	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
	{
		dest[length_dest + src_index] = src[src_index];
		if (dest[length_dest + src_index] == '\0')
		{
		break;
		}
	}
return (dest);
}
