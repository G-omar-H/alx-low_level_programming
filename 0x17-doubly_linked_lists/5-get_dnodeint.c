#include "lists.h"
/**
 * get_dnodeint_at_index - find the nth node
 * @head: pointer to the first node
 * @index: index iterator
 * Return: adresse of the nth index node, NULL if fails
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (head && ptr && index)
	{
		index--;
		ptr = ptr->next;
	}
	if (head && index == 0)
		return (ptr);
	return (NULL);
}
