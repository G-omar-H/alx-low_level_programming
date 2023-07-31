#include "lists.h"
/**
 * pop_listint - frees the head node
 * @head: pointer to the pointer pointing to first node
 * Return: value of the first node freed
 */
int pop_listint(listint_t **head)
{
	listint_t *current = (*head);

	int value = (*head)->n;

	(*head) = current->next;
	free(current);
	return (value);
}
