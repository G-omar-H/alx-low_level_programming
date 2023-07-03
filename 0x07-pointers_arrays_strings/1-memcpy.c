#include "main.h"
#include <string.h>
/**
 * _memcpy - copy n first memory area of a strign to another
 * @dest: sring to be filled
 * @src: string to be copied
 * @n: number of first bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
