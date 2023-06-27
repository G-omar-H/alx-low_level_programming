#include "main.h"
/**
 * swap_int - swap pointers value
 * @a: takes input from another function
 * @b: takes input from another function
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
