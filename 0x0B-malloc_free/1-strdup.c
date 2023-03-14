#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer  a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer upon success
 */
char *_strdup(char *str)
{
	int i, j, len_str;
	char *new_array;

	len_str = 0;
	i = 0;
	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		len_str++;
	i++;
	}
	new_array = malloc(len_str * sizeof(char));
	for (j = 0; j < len_str; j++)
		new_array[j] = str[j];

	if (new_array == NULL)
		return (NULL);
	return (new_array);
free(new_array);
}
