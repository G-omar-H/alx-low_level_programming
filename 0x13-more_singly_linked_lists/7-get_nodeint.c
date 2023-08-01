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
	listint_t *count = head;
	unsigned int nodes = 0;

	while (count != NULL)
	{
		count = count->next;
		nodes++;
	}
	if (nodes < index)
		return (NULL);
	while (index > 0 && current != NULL)
	{
		index--;
		current = current->next;
	}
	return (current);
}
