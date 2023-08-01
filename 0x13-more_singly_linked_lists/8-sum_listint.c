#include "lists.h"
/**
 * sum_listint - add all linked list values
 * @head: pointer to the first node
 * Return: sum of linked list values
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
