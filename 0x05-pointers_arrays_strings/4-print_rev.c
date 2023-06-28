#include "main.h"
/**
 * print_rev - print a reversed string
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	unsigned int len, i;

	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
