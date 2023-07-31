#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of a linked list
 * @head: pointer to a pointer pointing to first node
 * @n: valude of node
 * Return: null if fail; pointer to the new nodeat success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new = NULL;
	return (current);
}
