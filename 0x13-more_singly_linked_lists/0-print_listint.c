#include "lists.h"
/**
 * print_listint - print a linked list
 * @h: pointer to the first node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		printf("empty list");
		return (1);
	}
	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
