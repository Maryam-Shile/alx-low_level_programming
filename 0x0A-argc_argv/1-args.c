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

	(void)argv;
	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
