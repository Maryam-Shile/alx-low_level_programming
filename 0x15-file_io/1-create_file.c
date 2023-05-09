#include "main.h"

/**
 * create_file - creates file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: returns 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	bw = write(fd, text_content, strlen(text_content));
	if (bw == -1  || (size_t)bw != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
