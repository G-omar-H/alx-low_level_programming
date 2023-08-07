#include "main.h"
/**
 * read_textfile - read and print a file to the standard output
 * @filename: pointer to the file
 * @letters: number of letters to print from file
 * Return: number of elements red and printed
 *		0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int fd;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename || !buff)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	n = read(fd, buff, letters);
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buff, n) != n)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (n);
}
