#include <stdio.h>
/**
 * main - prints numbrt of args
 * @argc: counter
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
