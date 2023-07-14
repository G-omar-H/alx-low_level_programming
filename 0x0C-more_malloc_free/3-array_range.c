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
	int i, j;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == 0)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;
	return (arr);
}
