#include "variadic_functions.h"
/**
 * print_numbers - function to print variadicc args seperated by a strin
 * @separator: string to seperat arguments
 * @n: first required arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	if (n)
	{
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i < n - 1)
			{
				printf("%s", separator);
			}
			i++;
		}
		printf("\n");
	}
	va_end(ap);
}
