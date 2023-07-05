#include "main.h"
/**
 * _pow_recursion - return power function
 * @x: takes input from another function
 * @y: takes input from another function
 * Return: result, 1 if exponent is 0, -1 if fail
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
