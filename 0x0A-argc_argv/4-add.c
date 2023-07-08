#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum of args
 * @argc: counter
 * @argv: vector
 * Return: 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int i, count;

	count = 0;
	if (argv[1] == argv[argc])
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		count += atoi(argv[i]);
		if (i == argc - 1)
		{
			printf("%d\n", count);
		}

	}
	return (0);
}
