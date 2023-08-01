#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer pointing to the first node
 * Return: pointer to the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;

	}
	*head = prev;
	return (*head);
}
