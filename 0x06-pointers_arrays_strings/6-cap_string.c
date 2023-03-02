#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char separators[] = {9, 10, 32, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
			break;
				for (j = 0; j < 13; j++)
				{
					if (s[i] == separators[j])
						s[i] = s[i + 1] - 32;
				}

	i++;
	}
return (s);
}
