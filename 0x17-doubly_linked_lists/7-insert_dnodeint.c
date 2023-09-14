#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at nth index
 * @h: pointer to the first node
 * @idx: index iteretor
 * @n: value of node
 * Return: adress to the new node, NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = (*h), *previous = (*h);

	new = malloc(sizeof(dlistint_t));
	if (!new || (!h && idx))
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	while (current && idx)
	{
		current = current->next;
		idx--;
		if (current && !idx)
		{
			new->n = n;
			new->next = current;
			new->prev = previous;
			previous->next = new;
			current->prev = new;
			return (new);
		}
		previous = previous->next;
	}
	if (!current && !idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
