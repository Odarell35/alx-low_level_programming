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
	int i, k, j;
	char *new_array;
	int len_s1, len_s2;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	if (s1 == NULL || s2 == NULL)
		s1 = s2 = " ";

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
	new_array = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	for (k = 0; k < (len_s1 + len_s2); k++)
	{
		i = 0;
		new_array[k] = s1[i];
		s1++;
	}
	for (k = len_s1; k < (len_s1 + len_s2); k++)
	{
		j = 0;
		new_array[k] = s2[j];
		s2++;
	}
	if (new_array == NULL)
		return (NULL);
	return (new_array);
}
