#include "lists.h"
/**
 * insert_nodeint_at_index - add a node at index
 * @head: pointer to the pointer pointing to the first node
 * @idx: index
 * @n: data of the new node
 * Return: pointer to the first node, NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = *head;
	listint_t *previous = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (idx > 1 && previous != NULL)
	{
		idx--;
		previous = previous->next;
	}
	if (idx != 1)
		return (NULL);
	new->next = previous->next;
	previous->next = new;
	return (new);
}
