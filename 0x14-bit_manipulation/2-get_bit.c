#include "main.h"
/**
 * get_bit - get bit at index
 * @n: takes input from another function
 * @index: nth bit
 * Return: bit at index, -1 if fails
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = index;

	while (count > 0 && n)
	{
		n >>= 1;
		count--;
	}
	if (count != 0)
		return (-1);
	return ((n & 1) ? 1 : 0);
}
