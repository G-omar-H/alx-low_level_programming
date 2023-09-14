#include "lists.h"
/**
 * add_dnodeint_end - add node at tail
 * @head: pointer to the first node
 * @n: value of the new node
 * Return: addresse of the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	else if (!(*head))
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		new = NULL;
		return (*head);
	}
	ptr = (*head);
	while (ptr->next)
		ptr = ptr->next;
	new->n = n;
	new->next = NULL;
	ptr->next = new;
	new->prev = ptr;
	ptr = NULL;
	return (new);
}
