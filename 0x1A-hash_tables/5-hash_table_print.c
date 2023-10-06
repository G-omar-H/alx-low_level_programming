#include "hash_tables.h"
#include <stdio.h>


/**
 * print_list - prints a linked list of hash_node_t
 * @h: a poionter to a pointer to the first node
 *
 * Return: nothing
 */

void print_list(hash_node_t **h)
{
	hash_node_t *temp;

	temp = *h;
	while (temp)
	{
		printf(", '%s': '%s'", temp->key, temp->value);
		temp = temp->next;
	}
}

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			print_list(&(ht->array[i]->next));
			i++;
			break;
		}
	}
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			print_list(&(ht->array[i]));
		}
	}
	printf("}\n");
}
