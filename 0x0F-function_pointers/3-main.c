#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print result
 * @argv: arguments string
 * @argc: arg counter
 * Return: 0 (success)
 */
int  main(int argc, char **argv)
{
	int (*opf)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opf = get_op_func(argv[2]);
	if (!opf)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opf(a, b));
		return (0);

}
