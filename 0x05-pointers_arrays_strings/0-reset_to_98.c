#include "main.h"
/**
 * reset_to_98 - reset value of n to 98
 * @n: takes inpute from another function
 * Return: Always 0 (success)
 */
void reset_to_98(int *n)
{
	int **p;

	p = &n;
	**p = 98;
}
