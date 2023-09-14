#include "lists.h"
/**
 * dlistint_len - count number of element in a doubly lincked-list
 * @h: pointer to the first node
 * Return: number of nodes within a doubly lincked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t n = 0;

	if (!h)
		return (n);
	else if (ptr->prev != NULL)
	{
		while (ptr->prev)
			ptr = ptr->prev;
	}
	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
