#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int forward_count = 0;
	char rev = s[0];
	int i;

	while (s[forward_count] != '\0')
	{
		forward_count++;
		i = 0;
		while (i < forward_count)
		{
			forward_count--;
			rev = s[i];
			s[i] = s[forward_count];
			s[forward_count] = rev;
			i++;
		}
	}
}
