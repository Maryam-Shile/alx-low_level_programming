#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of program
 * @argc: argument count
 * @argv: array of passed arguments
 * Return: returns 0 when successful
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
