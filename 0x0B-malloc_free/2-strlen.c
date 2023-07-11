#include "main.h"
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
