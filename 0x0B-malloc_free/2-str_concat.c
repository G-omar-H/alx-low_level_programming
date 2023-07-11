#include "main.h"
/**
 * str_concat - concatinate two strings
 * @s1: string to be conca
 * @s2: string to conca
 * Return: concatinated sring, or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int asize = 0;
	char *str;
	int i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[size] != '\0'; size++)
		;
	for (; s2[asize] != '\0'; asize++)
		;
	str = malloc(((size + asize) * sizeof(char)) + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i <= size + asize; i++)
	{
		if (i < size)
			str[i] = s1[i];
		else
			str[i] = s2[i - size];
	}
	str[i] = '\0';
	return (str);
}
