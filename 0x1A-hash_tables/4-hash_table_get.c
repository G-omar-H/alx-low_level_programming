#include "hash_tables.h"
/**
 * hash_table_get - get the value at key
 * @ht: hash table to compute
 * @key: key to check its value
 * Return: key's value, NULL if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	}
	return (NULL);
}
