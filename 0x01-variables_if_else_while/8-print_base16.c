#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints digits of 16 base
 * Return: Always 0 (success)
*/

int main(void)
{
	char Hex = 48;

	while (Hex <= 102)
	{
		putchar (Hex);
		if (Hex == 57)
		{
			Hex += 39;
		}
		Hex++;
	}
	putchar('\n');
	return (0);
}
