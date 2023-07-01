#include "main.h"
/**
 * isLower - detect wich lowercase character
 * @c: char
 * Return: 1 if true, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}


/**
 * isDelimiter - check for delimiters
 * @c: char
 * Return: 1 if found, 0 if not
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * cap_string - capitalize all a string
 * @s: string
 * Return: str
 */
char *cap_string(char *s)
{
	char *p = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (p);
}
