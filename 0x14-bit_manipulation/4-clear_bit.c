#include "main.h"
/**
 * clear_bit - set bit to 0 a given index
 * @n: pointer taking input from another function
 * @index: nth bit
 * Return: 1 (success), -1 at fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
