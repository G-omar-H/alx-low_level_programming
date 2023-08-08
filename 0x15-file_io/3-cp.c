#include "main.h"
/**
 * close_file - chack if close fails, otherwise just close
 * @fd: file descripter
 * Return: void.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy content of file 1 into file 2 from arguments
 * @ac: number of arguments
 * @av: argument vector
 * Return: void.
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	ssize_t R, W;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff ==  NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd1 = open(av[1], O_RDONLY);
	R = read(fd1, buff, 1024);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((R > 0))
	{
		if (R == -1 || fd1 == -1)
		{
			free(buff);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		W = write(fd2, buff, R);
		if (fd2 == -1 || W == -1 || W != R)
		{
			free(buff);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		R = read(fd1, buff, 2024);
		fd2 = open(av[2], O_WRONLY, O_APPEND);
	}
	free(buff);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
