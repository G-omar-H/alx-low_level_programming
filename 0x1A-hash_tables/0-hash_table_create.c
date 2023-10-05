#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: pointer to the new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; (unsigned long int)i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
