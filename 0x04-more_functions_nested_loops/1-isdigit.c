#include "main.h"
/**
 * _isdigit - checkes if c is a digit
 * @c: takes input from another function
 * Return: 1 i c is adigit, return 0 if its not
*/
int _isdigit(int c)
{
	int n = c;

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
