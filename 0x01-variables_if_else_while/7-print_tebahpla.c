#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints reverse alphabets only putchar function
 * Return: Always 0 (success)
*/
int main(void)
{
	char alph = 122;

	for (alph = 122; alph >= 97; alph--)
	{
		putchar(alph);

	}
	putchar('\n');
	return (0);
}
