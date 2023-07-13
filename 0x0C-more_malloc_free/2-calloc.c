#include "main.h"
/**
 * _calloc : allocate memory for an array, nd st memory to 0
 * @nmemb: number of elements in the array to be allocated
 * @size: size of each elem
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = calloc(nmemb, sizeof(*arr));
	if (arr == 0)
	       return (NULL);
	return (arr);	
}
