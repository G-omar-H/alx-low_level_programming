#include "main.h"
/**
 * puts_half - print last half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int len, i, temp;

	temp = strlen(str);
	if ((temp - 1) % 2 == 0)
		len = (temp) / 2;
	else if ((temp - 1) % 2 != 0)
		len = (temp - 1) / 2;
	for (i = len ; i < temp; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
