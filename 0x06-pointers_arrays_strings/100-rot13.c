#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @s: string
 *
 * Return: string
 */
char *rot13(char *s)
{
	int s_index;
	int i;
	char rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	s_index = 0;
	while (s[s_index] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[s_index] == alphabet[i])
			{
				s[s_index] = rot13[i];
					break;
			}
		}
		s_index++;
	}
return (s);
}
