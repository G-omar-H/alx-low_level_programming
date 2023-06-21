#include "main.h"
/**
 * main - Entry point
 * Description: C programme that prints all numbers
 *	from 0 to 1024 that are
 *	multiplication of 3 or 5 and return the sum
 * Return: Always 0 (success)
*/
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
