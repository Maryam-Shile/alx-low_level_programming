#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read text file into a standard output
 * @filename: filename as stdout
 * @letters: length of the file
 * Return: returns written output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t br, bw;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	br = read(fd, buff, letters);
	if (br == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[br] = '\0';
	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	free(buff);
	return (bw);
}
