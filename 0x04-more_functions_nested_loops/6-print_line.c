#include "main.h"
/**
 * print_line - print _ charactere
 * @n: takes input from another function
 * Return: 0
 */
void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
