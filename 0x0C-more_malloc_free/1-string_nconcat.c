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
	int i, j, nc;
	unsigned int p, k;

	nc = _strlen(s1) + n;
	p = _strlen(s2);
	s1 = malloc(nc * sizeof(char) + 1);
	if (s1 == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (n > p)
			s1[i] = s2[j];
		else
		{
			while (i < nc && k < n)
			{
				s1[i] = s2[k];
			}
			i++;
			k++;
			}
	}
	i++;
	s1[i] = '\0';
	return (s1);
}

