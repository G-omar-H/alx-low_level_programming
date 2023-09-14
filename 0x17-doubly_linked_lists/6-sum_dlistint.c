#include "lists.h"
/**
 * sum_dlistint - add lincked list values
 * @head: pointer to the first node
 * Return: sum of vlaues
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int count = 0;

	while (head && ptr)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
