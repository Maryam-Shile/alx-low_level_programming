#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 * Return: return zero
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
