#include "main.h"

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

	for (i = 0; i < n && s[i] != '\0'; i++)
		s[i] = b;
return (s);
}
