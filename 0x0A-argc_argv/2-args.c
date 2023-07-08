#include <stdio.h>
/**
 * main - prints each argument passed a function
 * @argc: arg counter
 * @argv: arg vecter
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
