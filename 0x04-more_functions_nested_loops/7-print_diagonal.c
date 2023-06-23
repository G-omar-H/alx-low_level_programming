#include "main.h"
/**
 * print_diagonal - print \ charactere in diagonal  time
 * @n: take input from another function
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (s = 1; s <= l; s++)
			{
				if (s < l)
					_putchar(' ');
				if (s == l)
					_putchar('\\');
			}
			_putchar('\n');
		}

	}
}
