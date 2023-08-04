#include "main.h"
/**
 * set_bit - set 1 into nth bite
 * @n: pointer to an integer
 * @index: to the nth bit
 * Return: 1 at success, -1 at fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long set = 1;

	while (index > 0)
	{
		set <<= 1;
		index--;
	}
	if (index != 0)
		return (-1);
	*n = *n | set;
	return (1);
}
