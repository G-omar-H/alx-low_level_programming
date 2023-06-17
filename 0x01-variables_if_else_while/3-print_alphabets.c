#include <stdio.h>

/**
 * main - Entry point
 * Description: C programme that print alphabet bought lower and uppercase
 * Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;
	char Alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	putchar('\n');
	return (0);
}
