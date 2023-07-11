#include "main.h"

void close_files(int from, int to);

/**
 * main - main program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns zero
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t br, bw;
	int from;
	int to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((br = read(from, buffer, sizeof(buffer))) > 0)
	{
		bw = write(to, buffer, br);
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
	close_files(from, to);
	return (0);
}

/**
 * close_files - closes files
 * @from: file to cooy from
 * @to: file to copy to
 * Return: nothing
 */
void close_files(int from, int to)
{
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}
