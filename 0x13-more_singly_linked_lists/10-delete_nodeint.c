#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: pointer to pointer pointing to the first node
 * @index: node number to delete starting from 0
 * Return: 1 at success, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int idx = index;

	if (index == 0)
	{
		current = current->next;
		*head = current;
		free(previous);
		return (1);
	}
	while (index > 0 && current != NULL)
	{
		index--;
		current = current->next;
	}
	if (index != 0)
		return (-1);
	while (idx > 1 && previous != NULL)
	{
		idx--;
		previous = previous->next;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
