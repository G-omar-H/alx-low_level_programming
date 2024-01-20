#include "search_algos.h"
skiplist_t *linear_skip(skiplist_t *list, int value);
/**
 * linear_skip - search for an element on a sorted skip list
 * @list: pointer to the first node of the lincked list
 * @value: value to search in
 * Return: pointer to the element
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *sub, *prev;
	size_t save, i;

	node = sub = prev = list;
	if (!list)
		return (NULL);

	while (node)
	{
		save = prev->index;
		prev = node;
		node = node->express;
		if (node)
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

		for (i = 0; i < prev->index - save; i++)
		{
			if (node)
				sub = sub->next;

			if (!node)
			{
				while (sub->index < prev->index)
					sub = sub->next;
				prev = sub;
				while (sub->next)
					sub = sub->next;
				break;
			}

		}
		if (node)
		{
			if (node->n > value)
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
						prev->index, node->index);
				while (sub->index <= node->index)
				{
					printf("Value checked at index [%ld] = [%d]\n", sub->index, sub->n);
					if (sub->n == value)
						return (sub);
					sub = sub->next;
				}
				return (NULL);
			}
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, sub->index);

	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
