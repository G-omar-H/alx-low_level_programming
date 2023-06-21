#include "main.h"
/**
 * times_table - prints 9 table times
 * example table
 * 0, 0, 0, 0,..
 * 0, 1, 2, 3,..
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
