#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at nth index
 * @head: pointer to the fist node
 * @index: index iteretor
 * Return: 1 (success), 0 (fails)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = (*head), *previous = (*head);

	if (!head)
		return (-1)
	if (*head && !index)
	{
		if (!current->next)
		{
			*head = NULL;
			previous = NULL;
			free(current);
		}
		else
		{
			current = current->next;
			*head = current;
			current->prev = NULL;
			free(previous);
		}
		return (1);
	}
	while (current && index)
	{
		index--;
		current = current->next;
		if (current && !index && current->next)
		{
			previous->next = current->next;
			current->next->prev = previous;
			free(current);
			return (1);
		}
		if (!current->next && !index)
		{
			previous->next = NULL;
			free(current);
			return (1);
		}
		previous = previous->next;
	}
	return (-1);
}
