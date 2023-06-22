#include "main.h"
/**
 * print_most_numbers - print numbers except 4 and 2
 * Return: 0
*/
void print_most_numbers(void)
{
	int d = 0;

	for (d = 48; d <= 57; d++)
	{
		if (d != 50 && d != 52)
			_putchar(d);
	}
	_putchar('\n');
}
