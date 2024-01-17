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
	size_t prev = 0, index = 0, k = 0, step = sqrt(size);

	if (array && size > 0)
	{
		while (array[index] < value && index < size)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
			k++;
			prev = index;
			index = k * step;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", prev,  index);
		while (prev <= index && prev < size)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			prev++;
			if (array[prev] == value)
				return (prev);
		}
	}
	return (-1);
}
