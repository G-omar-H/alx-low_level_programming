#include "main.h"
/**
 * _strncat - cancatinate two functions
 * @dest: string
 * @src: sting
 * @n: takes inpute from another function
 * Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{	
	strncat(dest, src, n);
	return (dest);
}
