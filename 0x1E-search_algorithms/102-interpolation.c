#include "search_algos.h"
/**
 * interpolation_search - look for an element
 * on a sorted array using interpolation algorithm
 * @array: pointer to the first element of a list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the element where value, -1 if unseccessful
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, pos = lo + ((double)(hi - lo) / (array[hi]
				- array[lo]) * (value - array[lo]));

	if (array && size > 0)
	{
		while (lo <= hi && array[lo] <= value && array[hi] >= value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				lo = pos + 1;
			else
				hi = pos - 1;
			if (lo == hi)
				break;
			pos = lo + ((double)(hi - lo) / (array[hi]
						- array[lo]) * (value - array[lo]));
		}
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}
