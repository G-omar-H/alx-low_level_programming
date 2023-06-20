#include "main.h"
/**
 * print_sign - prints + if n greater than 0
 *		0 if equal 0
 *		- if n less than 0
 * @n: takes integer type from fonction
 * Return: 1 if +, - if 0, 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
