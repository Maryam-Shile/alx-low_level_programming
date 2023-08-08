#include "main.h"

/**
 * close_files - program closes files
 * @file_src: file to copy from
 * @file_dest: file to paste in
 * return: nothing
 */
void close_files(int file_src, int file_dest)
{
	if (close(file_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}
	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
}

/**
 * main - main program
 * @argc: argument count
 * @argv: argumrnt list
 * Return: returns 0 when successful
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	ssize_t br, bw;
	int src;
	int dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((br = read(src, buff, sizeof(buff))) > 0)
	{
		bw = write(dest, buff, br);
		if (bw == -1 || bw != br)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_files(src, dest);
	return (0);
}
