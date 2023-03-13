#include "main.h"
#include <stdlib.h>
/**
 * str_concat-  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *new_array;
	int len_s1, len_s2;

	len_s1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	len_s2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
	{
		len_s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (NULL);
	new_array = malloc((len_s1 + len_s2) * sizeof(char));

	for (k = 0; k < (len_s1 + len_s2); k++)
	{
		if (s1[i] != '\0')
		{
			new_array[k] = s1[i];
		}
		for (j = 0; j < len_s2; j++)
		{
			new_array[k] = s2[j];
		}
	}
	if (new_array == NULL)
		return (NULL);
	return (new_array);
}
