#include "lists.h"
/**
 * free_dlistint - free a doubly lincked list
 * @head: pointer to the first node
 * Return: void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *previous = NULL, *current = head;

	if (head)
	{
		while (current)
		{
			previous = current;
			current = current->next;
			free(previous);
		}
		head = NULL;
	}
}
