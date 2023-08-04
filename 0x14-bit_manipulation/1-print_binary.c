#include "main.h"
/**
 * print_binary - find bianry representation of a number
 * @n: takes inpute from another function
 * Return: void.
*/
void print_binary(unsigned long int n)
{
	unsigned long binary = 0, i = 1;

	while (n > 0)
	{
		if ((n & 1) == 1)
			binary += i;
		i *= 10;
		n >>= 1;
	}
	printf("%lu", binary);
}
