#include "main.h"
/**
 * _strdup - duplicate a string into a new alocatted memory
 * _strlen - return lenght of a string
 * @s: takes input from another function
 * Return: new pointer, or NULL if fail
 */
int _strlen(char *s);
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	len = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		printf("mallocfails");
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
/**
 * _strlen - return lenght of a string
 * @s: takes input from another function
 * Return: lenght of string s
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 1; s[i] <= '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
