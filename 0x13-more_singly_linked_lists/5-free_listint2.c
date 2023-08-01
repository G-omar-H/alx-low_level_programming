#include "lists.h"
/**
 * free_listint2 - frees a linked list and set head poiter into NULL
 * @head: poiter to the pointer pointing into first node
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	(*head) = NULL;
}
