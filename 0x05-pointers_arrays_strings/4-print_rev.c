#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: input string
 *Return: nothing
 */

void print_rev(char *s)
{
	int forward_count = 0;
	int i;
	int reverse_count;

	i = 0;
	while (s[i] != '\0')
	{
		forward_count++;
		i++;
	}
	reverse_count = (forward_count - 1);
	while (reverse_count >= 0)
	{
		_putchar(s[reverse_count]);
		reverse_count--;
	}
	_putchar('\n');
}
