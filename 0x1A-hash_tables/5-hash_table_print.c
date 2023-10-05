#include "hash_tables.h"
/**
 * hash_table_print - prints hash table's elements
 * @ht: tables to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;


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
				printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
				if (i < count)
					printf(", ");
			}

		}
		printf("}\n");
	}
}
