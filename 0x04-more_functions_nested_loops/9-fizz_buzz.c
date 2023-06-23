#include "main.h"
/**
 * main - print numbers from 0 to 100,
 *		print Fizze when multiple of 3
 *		print Buzz when multiples of 5
 *		print FizzBuzz whne multiples of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3) != 0 && (d % 5) != 0)
			printf("%d ", d);
		else if ((d % 3) == 0)
			printf("Fizz ");
		else if ((d % 5) == 0)
			printf("Buzz ");
		else if ((d % 3) == 0 && (d % 5) == 0)
			printf("FizzBuzz ");
	}
	printf("\n");
	return (0);
}
