#include "hash_tables.h"
/**
 * hash_table_get - get the value at key
 * @ht: hash table to compute
 * @key: key to check its value
 * Return: key's value, NULL if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
