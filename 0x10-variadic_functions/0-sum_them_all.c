#include "variadic_functions.h"
/**
 * sum_them_all - add variadic aruments
 * @n: first reauired variable
 * Return: sum of all varidic aruments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(num, n);
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}
	va_end(num);
	return (sum);
}
