#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: pointer to the new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	int i;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; (unsigned long int)i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
