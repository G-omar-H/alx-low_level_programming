#include "main.h"
/**
 * _atoi - function that convert a string into integers
 * @s: string to convert
 * Return: string of integers
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int signe = 1;

	do {
		if (*s == '-')
			signe *= (-1);
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * signe);
}
