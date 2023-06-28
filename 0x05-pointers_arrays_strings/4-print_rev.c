#include "main.h"
/**
 * print_rev - print a reversed string
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
