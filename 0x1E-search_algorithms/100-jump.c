#include "search_algos.h"
/**
 * jump_search - searching an element into a sorted array using jump algorithm
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, index = 0, k = 0, step = (int)sqrt((double)size);

	if (array && size > 0)
	{
		do {
			printf("Value checked array[%d] = [%d]\n", index, array[index]);

			if (array[index] == value)
				return (index);
			k++;
			prev = index;
			index = k * step;
		} while (array[index] < value && index < (int)size);

		printf("Value found between indexes [%d] and [%d]\n", prev,  index);

		while (prev <= index && prev < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
				return (prev);
			prev++;
		}
	}
	return (-1);
}
