#include "search_algos.h"
/**
 * jump_list - check for an element on a sorted lincked
 * list using jump algorithm
 * @list: pointer to the first node of the lincked list
 * @size: size of the array
 * @value: value to search in
 * Return: pointer to the element
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t k, m, i;
	listint_t *node;

	if (!list || size == 0)
		return (NULL);
	m = sqrt(size);
	k = 0;
	node = list;
	do {
		if (list->n == value)
			return (list);
		k++;
		node = list;
		for (i = 0; i < k * m - node->index && list->next != NULL; i++)
		{
			list = list->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	} while (list->next != NULL && list->n < value);
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, list->index);
	for (; node->index <= list->index; node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		else if (!node->next)
			break;
	}
	return (NULL);
}
