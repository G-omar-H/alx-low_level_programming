#include "main.h"
/**
 * _realloc - change memory allocated to a new one
 * @ptr: pointer to the old memory area
 * @old_size: size of the old memory area
 * @new_size: size of the new memory area
 * Return: new pointer to the new memory, NULL if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tpr;
	unsigned int n;

	ptr = (char *)malloc(old_size);
	tpr = (char *)malloc(new_size);
	if (ptr == NULL && tpr == NULL)
	{
		free(ptr);
		free(tpr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
		{
			*(tpr + n) = *((char *)ptr + n);
		}
		free(ptr);
	}
	if (new_size == old_size)
	{
		free(tpr);
		return (ptr);
	}
	if (ptr == NULL && tpr != NULL)
	{
		free(ptr);
		return (tpr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return ((void *)tpr);
}
