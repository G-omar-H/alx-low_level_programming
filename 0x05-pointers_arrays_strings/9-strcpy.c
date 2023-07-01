#include "main.h"
/**
 * _strcpy - copy a string into another
 * @dest: string
 * @src: string
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i, row;

	row  = strlen(src);
	for (i = 0; i < row; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
