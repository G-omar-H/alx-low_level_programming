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
	size_t lo, hi, pos;
	double f;

	lo = 0;
	hi = size - 1;


	if (array && size > 0)
	{
		while (size)
		{
			f = ((double)(hi - lo) / (array[hi]
						- array[lo]) * (value - array[lo]));
			pos = (size_t)(lo + f);
			printf("Value checked array[%ld]", pos);
			if (pos >= size)
			{
				printf(" is out of range\n");
				break;
			}
			else
				printf(" = [%d]\n", array[pos]);

			if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				lo = pos + 1;
			else
				hi = pos - 1;
			if (lo == hi)
				break;
		}
	}
	return (-1);
}
