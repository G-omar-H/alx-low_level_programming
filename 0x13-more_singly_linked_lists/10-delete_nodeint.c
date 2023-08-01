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

	if (index == 0 && *head)
	{
		previous = previous->next;
		*head = previous;
		free(current);
		return (1);
	}
	while (index > 1 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (index != 1)
		return (-1);
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
