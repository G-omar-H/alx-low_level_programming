#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10times
*/

void print_alphabet_x10(void)
{
	int time, ch;

	for (time = 0; time <= 9; time++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
