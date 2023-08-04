#include "main.h"
/**
 * clear_bit - set bit to 0 a given index
 * @n: pointer taking input from another function
 * @index: nth bit
 * Return: 1 (success), -1 at fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned  long int clear = 1;

	while (index)
	{
		if (clear > ULONG_MAX)
			return (-1);
		clear <<= 1;
		index--;
	}
	if (index != 0)
		return (-1);
	*n &= ~clear;
	return (1);
}
