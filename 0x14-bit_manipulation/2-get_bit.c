#include "main.h"
/**
 * get_bit - get bit at index
 * @n: takes input from another function
 * @index: nth bit
 * Return: bit at index, -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
