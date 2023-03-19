#include <stdio.h>

/**
 * main - the main function of the program
 * Description: printsnumbers in base 10 with while loop
 * Return: return 0 when successful
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}


