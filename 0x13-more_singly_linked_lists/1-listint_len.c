#include "lists.h"
/**
 * listint_len - count number of nodes within a single linked list
 * @h: poiter to the first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		printf("Empty list");
		return (1);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
