#include "function_pointers.h"
/**
 * array_iterator - execute a function's pointer on each elem of an array
 * @array:  to include each element inside
 * @size: of the array
 * @action: function's pointer to execute on array's elements
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
