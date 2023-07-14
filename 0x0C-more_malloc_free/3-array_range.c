#include "main.h"
/**
 * array_range - allocate memory for an array
 * @min: first element on the array
 * @max: last element on the array
 * Return: poiter to the new array, null if fail
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;
	long unsigned int j;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(arr) * sizeof(int));
	if (arr == 0)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		for (j = 0; j < sizeof(arr); j++)
			arr[j] = i;
	}
	return (arr);
}
