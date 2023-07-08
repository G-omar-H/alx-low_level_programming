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
	long int  i, n, m;

	if (argv[1] == argv[argc] || argv[2] == argv[argc])
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	n = atoi(argv[2]);
	m = i * n;
	printf("%li\n", m);
	return (0);
}
