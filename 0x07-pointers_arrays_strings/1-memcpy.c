#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
		dest[i] = src[i];
return (dest);
}
