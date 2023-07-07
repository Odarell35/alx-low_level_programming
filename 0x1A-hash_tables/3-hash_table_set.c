#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash tableyou want to add or update the key/value to
 * @key: is the key
 * @value:  is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*create element to be added*/
	unsigned long int hash_index;
	hash_node_t *element;
	hash_node_t *new;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	hash_index = key_index((const unsigned char *)key, ht->size);
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	strcpy(element->key, key);
	element->value = malloc(strlen(value) + 1);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (0);
	}
	strcpy(element->value, value);
	element->next = ht->array[hash_index];
	ht->array[hash_index] = element;
	current = ht->array[hash_index];
	if (current == NULL)
	{
		ht->array[hash_index] = element;
		return (1);
	}
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			strcpy(ht->array[hash_index]->value, value);
			return (1);
		}
		else
		{
			new = malloc(sizeof(hash_node_t));
			if (new == NULL)
			{
				free(element->key);
				free(element->value);
				free(element);
				return (0);
			}
			new->key = malloc(strlen(key) + 1);
			if (new->key == NULL)
			{
				free(element->key);
				free(element->value);
				free(element);
				free(new);
				return (0);
			}
			strcpy(new->key, key);
			new->value = malloc(strlen(value + 1));
			if (new->value == NULL)
			{
				free(element->key);
				free(element->value);
				free(element);
				free(new->key);
				free(new);
				return (0);
			}
			strcpy(new->value, value);
			new->next = ht->array[hash_index];
			ht->array[hash_index] = new;
			return (1);

		}
	}
}

