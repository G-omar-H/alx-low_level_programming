#include "main.h"
#include <string.h>
/**
 * _strspn - check for maching bytes
 * @s: string
 * @accept: string
 * Return: number of matching
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
