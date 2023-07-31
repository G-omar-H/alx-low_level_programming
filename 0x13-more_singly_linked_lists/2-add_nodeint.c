#include "lists.h"
/**
 * add_nodeint - add a new node in front of a linked list
 * @head: pointer to the pointer pointing to the first element
 * @n: value of the node
 * Return: pointer to new created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("fail");
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
