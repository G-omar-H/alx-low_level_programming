#include "main.h"
/**
 * print_number - print integers
 * @n: takes input from another function
 * Retunr: 0
 */
void print_number(int n)
{
	int c = abs(n);

	if (n < 0)
		_putchar('-');
	if (c >= 0 && c <= 9)
		_putchar(c + 48);
	else if (c >= 10 && c <= 99)
	{
		_putchar((c / 10) + 48);
		_putchar((c % 10) + 48);
	}
	else if (c >= 100 && c <= 999)
	{
		_putchar((c / 100) + 48);
		_putchar(((c / 10) % 10) + 48);
		_putchar((c % 10) + 48);
	}
	else if (c >= 1000 && c <= 9999)
	{
		_putchar((c / 1000) + 48);
		_putchar(((c / 100) % 10) + 48);
		_putchar(((c % 100) / 10) + 48);
		_putchar((c % 10) + 48);
		}
}
