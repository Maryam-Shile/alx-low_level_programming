#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file to be appended
 * @text_content: content to be added to the file
 * Return: returns 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bw = write(fd, text_content, strlen(text_content));
	if (bw == -1)
		return (-1);
	else
		return (1);
}
