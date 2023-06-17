#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to n each time it is executed
 * Description: various negatif positif for variable n
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{ printf("%d is negative\n", n); }
	else if (n == 0)
	{ printf("%d is zero\n", n); }
	else if (n > 0)
	{ printf("%d is positive\n", n); }
	return (0);
}
