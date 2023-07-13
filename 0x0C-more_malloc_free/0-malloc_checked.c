#include "main.h"
/**
 * malloc_checked - creat a new allocated memory
 * @b: takes inpute from another function
 * Return: 0
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
