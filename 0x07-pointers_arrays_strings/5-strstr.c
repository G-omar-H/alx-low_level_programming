#include "main.h"
/**
 * _strstr - check for matching
 * @haystack: string to be checked
 * @needle: sring checking
 * Return: haystack string from memory area matching, or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (haystack[itr] != 0)
	{
		jtr = 0;
		while (needle[jtr] >= 0)
		{
			if (needle[jtr] == haystack[itr])
			{
				if (jtr == 0)
					p = &haystack[itr];
				jtr++;
				itr++;
			}
			else
				itr++;
			if (needle[jtr] == 0)
				return (p);
		}
	}
	return (NULL);
}
