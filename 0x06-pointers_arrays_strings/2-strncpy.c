#include "main.h"
/**
 * _strncpy - copy into string
 * @dest: string
 * @src: string
 * @n: takes inpute from another function
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
