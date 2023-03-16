#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate from s2
 * Return: pointer or NULL on failure
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length, len_s1, len_s2;
	char *concat_str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
		return (NULL);
	}
	i = 0;
	len_s1 = 0;
	while (*s1 != '\0')
	{
		len_s1++;
	i++;
	}
	len_s2 = 0;
	i = 0;
	while (*s2 != '\0')
	{
		len_s2++;
	i++;
	}
	length = len_s1 + n + 1;
	concat_str = malloc(sizeof(char) * (length));
	if (concat_str == NULL)
		return (NULL);

	for (j = 0; j < len_s1; j++)
	{
		concat_str[j] = s1[j];
		s1++;
	}
	for (j = 0; j < n; j++)
	{
		concat_str[len_s1 + 1] = s2[j];
		s2++;
	}
	return (concat_str);
	/*if (n > len_s2 && s2[len_s2] == '\0')
			return (concat_str);*/
}
