#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - main function of the program
 * @argc: argument count
 * @argv: argument array
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ans = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	if (ans == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ans);
	return (0);
}
