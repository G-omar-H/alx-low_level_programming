#include "main.h"
/**
 * _sqrt_recursion - check for square root
 * @n: takes input from another function
 * @var: square root value
 * Return: square function
*/
int square(int n, int var);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - check for square root
 * @n: value to check square root for
 * @var: the square root
 * Return: square root value var, or -1 if not found
*/
int square(int n, int var)
{
	if (var * var == n)
		return (var);
	else if (var * var < n)
		return (square(n, var + 1));
	else
		return (-1);
}
