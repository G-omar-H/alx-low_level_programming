#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints hash table's elements
 * @ht: tables to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0, index = 0;
	hash_node_t *item;

	if (ht == NULL)
		printf("{}\n'");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				count++;
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
				if (item->next)
				{
					while (item->next)
					{
						item = item->next;
						printf("'%s': '%s'", item->key, item->value);
					}
				}
				index++;
			}
		}
		printf("}\n");
	}
}
