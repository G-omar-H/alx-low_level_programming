#include <stdio.h>
/**
 * main - Entry point
 * Description: C programe that print aphabet exclude 'q' and 'e'
 * Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'd'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'f'; alphabet <= 'p'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'r'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
