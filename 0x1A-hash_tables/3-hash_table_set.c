#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
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
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (value == NULL || key == NULL)
	{
		if (key == NULL)
			ht->array[index]->key = NULL;
		if (value == NULL)
			ht->array[index]->value = NULL;
		return (1);
	}
	item->key = strdup(key);
	item->value = strdup(value);
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
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		else
		{

			item->next = ht->array[index];
			ht->array[index] = item;
			return (1);
		}
	}
	free(item->key);
	free(item->value);
	free(item);
	return (0);
}
