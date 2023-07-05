#include "main.h"
/**
 * factorial - return factorial function
 * @n: takes input from another function
 * Return: factorial, if 1, -1 if fail
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
