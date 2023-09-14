#include "lists.h"
/**
 * print_dlistint - print all elements of a doubly lincked list
 * @h: pointer to the first node
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t n = 0;

	if (ptr->prev)
	{
		while (ptr->prev)
			ptr = ptr->prev;
	}
	while (ptr)
	{
		n++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}
