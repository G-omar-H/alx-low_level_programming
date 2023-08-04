#include "main.h"
/**
 * flip_bits - count nuber of bits to be fliped
 *			to get from a number to another
 * @n: tskes iput from another functioin
 * @m: takes input from another function
 * Return: number of bytes to be fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n  ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
