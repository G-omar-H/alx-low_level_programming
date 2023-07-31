#include "lists.h"
/**
 * free_listint2 - frees a linked list and set head poiter into NULL
 * @head: poiter to the pointer pointing into first node
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		(*head) = current->next;
		free(current);
		current = (*head);
	}
	(*head) = NULL;
}
