#include "main.h"
#include <string.h>
/**
 * _strspn - check for maching bytes
 * @s: string
 * @accept: string
 * Return: number of matching
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
