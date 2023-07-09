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
	long int i, j, count;

	count = 0;
	if (argv[1] == argv[argc])
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
		if (i == argc - 1)
		{
			printf("%li\n", count);
		}

	}
	return (0);
}
