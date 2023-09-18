#include "main.h"
/**
 * _isalpha - check if c is an alphabet
 * @c: takes input from another function.
 * Return: return 1 if tue est return 0
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
