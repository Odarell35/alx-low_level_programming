#include "main.h"
/**
 * leet - encodes a string into 1337
 *@s: string
 * Return: string
 */
char *leet(char *s)
{
	int i;
	int j;

	char small_letter[] = {'a', 'e', 'o', 't', 'l'};
	char big_letter[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {52, 51, 48, 55, 49};

	j = 0;
	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == small_letter[i] || s[j] == big_letter[i])
			{
				s[j] = numbers[i];
				break;
			}
		}
	j++;
	}
return (s);
}
