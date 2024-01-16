#include "search_algos.h"

/**
 * linear_search - search for an element witihin a list
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array && value)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
