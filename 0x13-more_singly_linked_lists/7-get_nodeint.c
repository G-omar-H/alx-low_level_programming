#include "lists.h"
/***/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (index > 0 && current != NULL)
	{
		if (current->next == NULL)
		{
			printf("Error");
			return (NULL);
		}
		index--;
		current = current->next;
	}
	return (current);
}
