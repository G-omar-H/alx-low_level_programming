#include "variadic_functions.h"
/**
 * print_strings - print a variadic number of strings
 * @separator: string to print between strings
 * @n: number of strings
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while  (i < n)
	{
		if (ap != NULL)
			printf("%s", va_arg(ap, char *));
		else if (ap == '\0')
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
