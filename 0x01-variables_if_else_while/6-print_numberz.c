#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints digits of base 10
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 48;

	do {
		putchar(n);
		n++;
	} while (n <= 57);

	putchar('\n');
	return (0);
}
