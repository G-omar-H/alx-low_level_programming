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
	int n = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename)
		return (0);
	n = read(open(filename, O_RDONLY), buffer, letters);
	if (n == -1)
		return (0);
	if (write(STDOUT_FILENO, buffer, n) != n)
		return (0);
	free(buffer);
	close(n);
	return (n);
}
