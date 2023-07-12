#include "main.h"
/**
 * _strlen - count lenght of a string
 * @s: string to count
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; s[c] != '\0'; c++)
	;
	return (c);
}
/**
 * argstostr - function that concatinate arguments
 * @ac: arg counter
 * @av: arg vector
 * Return: pointer to a new string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	str = malloc(sizeof(char) * nc + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
		{
			str[count] = av[i][j];
		}
		str[count] = '\n';
		count++;
	}
	str[count] = '\0';
	return (str);
}
