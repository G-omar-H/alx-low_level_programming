#include <stdio.h>
/**
 * main - Entry point
 * Description: C programme that prints numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 0;

	for (; n <= 9;)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
