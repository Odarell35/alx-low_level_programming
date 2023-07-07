#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: is the hash table you want to look into
 * @key:  the key you are looking for
 *
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash_index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[hash_index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
