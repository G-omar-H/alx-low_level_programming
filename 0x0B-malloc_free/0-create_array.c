#include "main.h"
/**
 * create_array - creat array
 * @size: size of the array
 * @c: initialization of array
 * Return: poiter to the array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
