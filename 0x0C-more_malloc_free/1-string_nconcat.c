#include "main.h"
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
	unsigned int i, j, _s1, _s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (_s1 = 0; s1[_s1] != '\0'; _s1++)
		;
	for (_s2 = 0; s2[_s2] != '\0'; _s2++)
		;
	str = malloc(_s1 + n + 1);
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

