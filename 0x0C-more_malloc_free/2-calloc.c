#include "main.h"
/**
 * _memset - fill a n number of memory block with a value
 * @s: pointer
 * @b: value to be filled
 * @n:number of memory block
 * Return: pointer to the memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return	(ptr);
}
/**
 * _calloc - allocate memory for an array, nd st memory to 0
 * @nmemb: number of elements in the array to be allocated
 * @size: size of each elem
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == 0)
		return (NULL);
	_memset(arr, 0, size * nmemb);
	return (arr);
}
