#include "main.h"
/**
 * create_file - creat a new file with read and write permission
 * @filename: pointer to a filename
 * @text_content: string to include
 * Return: 1 (success), -1 at fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		count = write(fd, text_content, len);
		if (count == -1 || count != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
