#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int get_len(int i);
char *str_cpy(char *dest, char *src);
/**
 * new_dog - a function that creates a new dog
 * get len of name + owner, malloc them, cpy name + owner to new
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *copy_name, *copy_owner;
	unsigned int i, name_len = 0, owner_len = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	i = 0;
	while (name[i] != '\0')
	{
		name_len++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		owner_len++;
		i++;
	}

	copy_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_owner == NULL)
		return (NULL);

	for (i = 0; i <= name_len; i++)
		copy_name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		copy_owner[i] = owner[i];

	new_name->name = copy_name;
	new_name->owner = copy_owner;
	new_name->age = age;
	return (new_name);
}
