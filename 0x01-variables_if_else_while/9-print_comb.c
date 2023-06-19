#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints numbers separateed by comma and space
 * Return: Always 0 (success)
*/

int main(void)
{
	char n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
		}
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
