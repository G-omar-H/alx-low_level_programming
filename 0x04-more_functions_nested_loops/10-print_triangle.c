#include "main.h"
/**
 * print_triangle - prints tringle size
 * @size: takes input from another function
 * Return: always 0 (success)
 */
void print_triangle(int size)
{
	int b, l, c;

	c = size;

	if (size <= 0)
		_putchar('\n');
	for (l = 1; l <= size; l++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b < c)
				_putchar(' ');
			else if (b >= c)
				_putchar('#');
		}
		c--;
		_putchar('\n');
	}
}
