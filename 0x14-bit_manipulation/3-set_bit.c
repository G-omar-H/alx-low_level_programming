#include "main.h"
/**
 * set_bit - set 1 into nth bite
 * @n: pointer to an integer
 * @index: to the nth bit
 * Return: 1 at success, -1 at fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1UL << index));
}
