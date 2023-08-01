#include "lists.h"
/**
 * get_nodeint_at_index - set to the nth node
 * @head: pointer to the first node
 * @index: the node number
 * Return: pointer to the nth node, NULL if it's not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int nodes = 1;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	if (nodes < index)
	{
		printf("Error");
		return (NULL);
	}
	while (index > 0 && current != NULL)
	{
		index--;
		current = current->next;
	}
	return (current);
}
