#include "variadic_functions.h"
/**
 * print_all - print every variadic parameter
 * @format: string of different datatypes
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i;
	float f;
	char *fcpy = strdup(format);

	va_start(args, format);
	while (*fcpy)
	{
		switch (*fcpy++)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (*fcpy)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
