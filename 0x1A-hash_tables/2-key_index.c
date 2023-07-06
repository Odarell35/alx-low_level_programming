#include "hash_tables.h"
/**
 *key_index- gives you the index of a key.
 *@size: is the size of the array of the hash table
 *@key: is the key
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 *This function should use the hash_djb2 function that you wrote earlier
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);
return (hash_index % size);
}
