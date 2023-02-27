#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int len = 1;
	int sum = 0;
	char l = s[0];

	while (l != '\0')
	{
		sum++;
		l = s[len++];
	}
	return (sum);
}
