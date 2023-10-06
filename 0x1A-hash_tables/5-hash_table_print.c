#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht);
/**
 * hash_table_print - prints hash table's elements
 * @ht: tables to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0, index = 0;
	hash_node_t *item;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			item = ht->array[i];
			if (ht->array[i]->next)
			{
				while (item->next)
				{
					item = item->next;
					count++;
				}
			}
			count++;
		}
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			item = ht->array[i];
			printf("'%s': '%s'", item->key, item->value);
			if (index < (count - 1))
			{
				printf(", ");
			}
			if (ht->array[i]->next)
			{
				while (item->next)
				{
					item = item->next;
					printf("'%s': '%s'", item->key, item->value);
					index++;
				}
			}
			index++;
		}
	}
	printf("}\n");
}
