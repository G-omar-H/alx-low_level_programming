#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht);
/**
 * hash_table_print - prints hash table's elements
 * @ht: tables to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	int flag = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			flag = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
