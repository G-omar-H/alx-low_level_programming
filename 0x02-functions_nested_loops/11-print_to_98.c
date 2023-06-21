#include "main.h"
/**
 * print_to_98 - print numbers from n to 98
 * @n: take input from another funtion
 * Return: 0
*/
void print_to_98(int n)
{
	int d = n;

	for (d = n; d < 98; d++)
		printf("%d, ", d);
	for (d = n; d > 98; d--)
		printf("%d, ", d);
	printf("98\n");

}
