#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	i = 0;
	len_dest = 0;
	while (dest[i] != '\0')
	{
		len_dest++;
		i++;
	}
	len_src = 0;
	while (src[i] != '\0')
	{
		len_src++;
		i++;
	}
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
return (dest);
}
