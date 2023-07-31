#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: poiter to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
