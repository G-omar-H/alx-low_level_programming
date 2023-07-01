#include "main.h"
/**
 * leet - crypt a string into leet code
 * @str: string to crypt
 * Return: str leet crypted
*/
char *leet(char *str)
{
	int i = 0;
	char *p = str;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
			{
				*str = b[i] + '0';
			}
		}
		str++;
	}
	return (p);
}
