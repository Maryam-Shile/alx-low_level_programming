#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counts
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
