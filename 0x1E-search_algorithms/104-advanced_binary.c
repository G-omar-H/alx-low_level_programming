#include "search_algos.h"
/**
 * advanced_binary - looks for the first occurence of an  element
 * on a sorted array
 * @array: pointer to the first element of a list
 * @f: first index
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int advanced_binary(int *array, size_t f, size_t size, int value)
{
	size_t i = 0, l, m;

	l = size - 1;
	m = (f + l) / 2;

	if (array && size > 0)
	{
		printf("Searching in array: ");
		for (i = f; i <= l; i++)
		{
			if (i == size - 1)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		if (array[m] == value)
		{
			if (array[m - 1] == value)
				return (advanced_binary(array, f, m, value));
			return (m);
		}
		else if (m  == l && array[m] != value)
			return (-1);
		else if (array[m] < value)
			return (advanced_binary(array, m + 1, size, value));
		else
			return (advanced_binary(array, f, m, value));
	}
	return (-1);
}
