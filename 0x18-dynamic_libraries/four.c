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
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

return (NULL);
}
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
/**
 * _memset - function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer to the block of mememory to fill
 * @b: this is the value to be set
 * @n: number of bytes to be set to the value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
