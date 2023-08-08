#include "main.h"
/**
 * append_text_to-file - concatinate a text into a file
 * @filename: pointer to filename
 * @text_content: text to concatinate
 * Return: 1 at success, -1 if fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		count = write(fd, text_content, len);
	}
	if (count == -1 || count != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
