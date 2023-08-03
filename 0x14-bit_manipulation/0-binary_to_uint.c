#include "main.h"
/**
 * power - calculate power arithmetic
 * @base: bse number
 * @exponent: exponent
 * Return: result
 */
int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
/**
 * binary_to_uint - convert numbr of base 2 to base 10
 * @b: string containing binary digit
 * Return: the converted number, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i, p, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	i = 0;
	p = len - 1;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] != 0)
			convert += power(2, p) * (b[i] - '0');
		i++;
		p--;
	}
	return (convert);
}
