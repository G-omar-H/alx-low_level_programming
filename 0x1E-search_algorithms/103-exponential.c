#include "search_algos.h"

/**
 * binary_searchh - find an element into a sorted array
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @f: first index
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int binary_searchh(int *array, size_t size, size_t f, int value)
{
	size_t i = 0, l = size - 1, m = f + l / 2;

	if (array)
	{
		while (f <= l)
		{
			printf("Searching in array: ");
			for (i = f; i <= l; i++)
			{
				if (i == l)
				{
					printf("%d\n", array[i]);
					break;
				}
				printf("%d, ", array[i]);
			}
			m = (f + l) / 2;
			if (array[m] == value)
				return (m);
			else if (array[m] < value)
				f = m + 1;
			else
				l = m - 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - check for an element on a sorted array
 * using exponentuial search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n"
			, bound / 2, MIN(bound + 1, (int)size) - 1);


	return (binary_searchh(array, MIN((size_t)bound + 1, size)
			, (size_t)bound / 2, value));
}
