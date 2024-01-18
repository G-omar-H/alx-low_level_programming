#include "search_algos.h"
/**
 * rec_search - looks for the first occurence of an  element
 * on a sorted array recursively
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int rec_search(int *array, size_t size, int value)
{
	size_t  m, i;


	m = size / 2;

	if (array && size > 0)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);
		printf("\n");
		if (m && size % 2 == 0)
			m--;
		if (array[m] == value)
		{
			if (m > 0)
				return (advanced_binary(array, m + 1, value));
			return ((int)m);
		}

		if (array[m] > value)
			return (advanced_binary(array, m + 1, value));
		m++;
		return (advanced_binary(array + m, size - m, value) + m);
	}
	return (-1);
}
/**
 * advanced_binary - calls rec_search to retur the idex of an element
 * on a sorted array recursively
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
