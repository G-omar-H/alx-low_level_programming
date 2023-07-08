#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers
 * @argc: counter
 * @argv: vector
 * Return: result or 1 if error
 */
int main(int argc, char  *argv[])
{
	int i, n;

	if (argv[1] == argv[argc])
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	n = atoi(argv[2]);
	printf("%d\n", i * n);
	return (0);
}
