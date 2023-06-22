#include "main.h"
/**
 * _isupper - check if c is uppercase or lowercase
 * @c: takes input from another function
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	int n = c;

	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
