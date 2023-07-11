#include "main.h"
/**
 * _strdup - duplicate a string into a new alocatted memory
 * @str: string to duplicate
 * Return: new pointer, or NULL if fail
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	i = 0;
	len = 0;
	if (str == 0)
		return (NULL);
	for (; str[len] != '\0'; len++)
		;
	ptr = malloc((len * sizeof(char)) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		while (str[i])
		{
			ptr[i] = str[i];
			i++;
		}
	}
	return (ptr);
}
