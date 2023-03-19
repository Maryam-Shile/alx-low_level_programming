#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints numbers in base 10 with while loop and putchar function
 * Return: return 0 when successful
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}


