#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}
/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments
 * @argv: An array of pointers to arg
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd1, fd2, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, buff, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);

	do {
		if (fd1 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(fd2, buff, rd);
		if (fd2 == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(fd1, buff, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buff);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
