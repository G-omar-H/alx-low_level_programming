#include "main.h"
#include <string.h>
/**
 * _memset - fill n first memory area pointed by s with constant b
 * @s: string
 * @b:constant byte
 * @n: number of first memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
