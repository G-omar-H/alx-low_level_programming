#include "lists.h"
/**
 * add_dnodeint - add a node at head
 * @head: pointer to a pointer pointing to the first node
 * @n: value of node to add
 * Return: adresse of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
	ptr->n = n;
	ptr->next = (*head);
	ptr->prev = NULL;
	(*head) = ptr;
	ptr = NULL;
	return (*head);
}
