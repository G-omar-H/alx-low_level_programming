#include "main.h"
/**
 * print_binary - find bianry representation of a number
 * @n: takes inpute from another function
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) ?  '1' : '0');
}

