#include "hash_tables.h"
/**
 * hash_table_print - prints hash table contents
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;
	int num;

	if (ht == NULL || ht->array == NULL )
		return;
	num = 1;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while(cur == NULL)
		{
			if(!num)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			num = 0;

			cur = cur->next;
		}
	}
	printf("}\n");
	}
