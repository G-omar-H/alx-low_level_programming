#include "main.h"
/**
 * _strcat - concatinate a string
 * @dest: string
 * @src: string
 * Return: src string
*/
char *_strcat(char *dest, char *src)
{
	strcat(src, dest);
	return (dest);
}
