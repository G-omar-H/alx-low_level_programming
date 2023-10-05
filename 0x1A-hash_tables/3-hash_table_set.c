#include "hash_tables.h"
#include <stdlib.h>
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

 	item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
	item->next = (hash_node_t *)malloc(sizeof(hash_node_t));
	item->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
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

			item->next = ht->array[index];
			ht->array[index] = item;
			return (1);
		}
	}
	return (0);
}
