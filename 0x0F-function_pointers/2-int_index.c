#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: number of array's elements
 * @cmp: func pointer to check if integer
 * Return: first element's index matches; -1 of fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
