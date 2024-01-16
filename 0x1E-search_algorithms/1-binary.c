#include "search_algos.h"
/**
 * binary_search - find an element into a sorted array
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, l = size - 1, f = 0, m = f + l / 2;

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
