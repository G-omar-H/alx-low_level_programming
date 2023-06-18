#include <stdio.h>
/**
 * main - Entry point
 * Description: C programe that print aphabet exclude 'q' and 'e'
 * Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		alphabet++;
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
