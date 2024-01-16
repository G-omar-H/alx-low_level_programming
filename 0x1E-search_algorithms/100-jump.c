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
	size_t prev = 0, step = sqrt(size);

	if (array)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		while (array[MIN(step, size) - 1] < value)
		{
			prev = step;
			step = step + sqrt(size);
			if (prev >= size)
				return (-1);
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", prev,  step);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		while (array[prev] < value)
		{
			prev++;
			if (prev == MIN(step, size))
				return (-1);
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		}
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
