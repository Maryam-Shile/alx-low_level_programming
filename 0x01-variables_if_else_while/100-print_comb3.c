#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints numbers in base 10 in
 * lowercase with while loop and putchar function
 * Return: return 0 when successful
 */

int main(void)
{
	int num, nums;

	num = 0;
	nums = 0;
	while (num < 10)
	{
		nums = num + 1;
		while (nums < 10)
		{
			putchar('0' + num);
			putchar('0' + nums);
			if (num != 8)
			{
				putchar(',');
				putchar(' ');
			}
			nums++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}


