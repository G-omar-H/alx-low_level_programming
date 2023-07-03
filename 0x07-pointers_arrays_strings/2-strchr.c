#include "main.h"
#include <string.h>
/**
 * _strchr - search for a character in c string
 * @s: string
 * @c: character, takes inpute from another function
 * Return: s if found, NULL if not
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] > 0; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
