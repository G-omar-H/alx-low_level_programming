#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints numbers separateed by comma and space
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
