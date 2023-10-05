#include "hash_tables.h"
/**
 * hash_table_set - insert a new item into the hash table
 * @ht: the table to compute
 * @key: key of the new item
 * @value: value of the new key
 * Return: 1 (success), 0 if fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = (char *)value;
		return (1);
	}
	else
	{
		if (strcmp(key, current->key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			item->key = (char *)key;
			item->value = (char *)value;
			item->next = ht->array[index];
			ht->array[index] = item;
		}
	}
	return (0);
}
