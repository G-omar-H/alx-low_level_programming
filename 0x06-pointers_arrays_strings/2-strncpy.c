#include "main.h"
/**
 * _strncpy - copy into string
 * @dest: string
 * @src: string
 * @n: takes inpute from another function
 * Retun: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
