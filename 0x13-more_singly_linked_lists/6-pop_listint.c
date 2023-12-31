#include "lists.h"
/**
 * pop_listint - frees the head node
 * @head: pointer to the pointer pointing to first node
 * Return: value of the first node freed
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if ((*head) == NULL)
		return (0);
	value = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (value);
}
