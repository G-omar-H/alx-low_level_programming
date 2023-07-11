#include "main.h"
/**
 * _strdup - duplicate a string into a new alocatted memory
 * @str: string to duplicate
 * Return: new pointer, or NULL if fail
*/
int _strlen(char *s);
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	i = 0;
	len = _strlen(str);
	if (str == NULL)
		return (NULL);
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
	i = 0;

	do {
		count += 1;
		i++;
	} while (s[i] != '\0');
	return (count);
}
