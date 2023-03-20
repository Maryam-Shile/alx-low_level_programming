#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints numbers in base 16 in
 * lowercase with while loop and putchar function
 * Return: return 0 when successful
 */

int main(void)
{
	int num;
	char letters;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}


