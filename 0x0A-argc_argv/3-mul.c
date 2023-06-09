#include <stdio.h>
#include <stdlib.h>

/**
 * main - main argument
 * @argc: argument count
 * @argv: argument passed
 * Return: returns 0 if successful
 */

int main(int argc, char **argv)
{
	int i, x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	i = x * y;
	printf("%d\n", i);
	return (0);
}
