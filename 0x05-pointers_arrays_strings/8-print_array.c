#include "main.h"
/**
 * print-array - print n element of an erray of integers
 * @a: array
 * @n: takes inpute from another function
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
