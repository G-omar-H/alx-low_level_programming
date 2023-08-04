#include "main.h"
/**
 * clear_bit - set bit to 0 a given index
 * @n: pointer taking input from another function
 * @index: nth bit
 * Retutn: 1 (success), -1 at fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned  int clear = 1;

	while (index)
	{
		clear <<= 1;
		index--;
	}
	if (index != 0)
		return (-1);
	*n = *n ^ clear;
	return (1);
}
