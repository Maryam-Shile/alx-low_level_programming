#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums only integers
 * @argc: argument count
 * @argv: argumant array
 * Return : always 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	result = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]) && *argv[i] != '-')
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
