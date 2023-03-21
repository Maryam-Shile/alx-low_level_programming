#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints numbers in base 10 in
 * lowercase with while loop and putchar function
 * Return: return 0 when successful
 */

int main(void)
{
	int num, nums, numz;

	num = 0;
	nums = 1;
	numz = 2;
	while (num < 10)
	{
		nums = num + 1;
		while (nums < 9)
		{
			numz = nums + 1;
			while (numz < 10)
			{
				putchar('0' + num);
				putchar('0' + nums);
				putchar('0' + numz);
				if (num != 7)
				{
					putchar(',');
					putchar(' ');
				}
				numz++;
			}
			nums++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}


