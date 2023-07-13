#include "main.h"
/**
 * strlen - to count string's elements
 * @s: string to count
 * Return: number of elements into the string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
/**
 * string_nconcat - concatinate n elements from a string
 * @s1: string to be concatinated
 * @s2: string to cocatinate
 * @n: number of elements to concatinate
 * Return: concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, nc;

	nc = _strlen(s1) + n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(nc  * sizeof(char) + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

