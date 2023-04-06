#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints numbers in base 10 in
 * lowercase with while loop and putchar function
 * Return: return 0 when successful
 */

int main(void)
{
	int num, nums, numz, noms;

	num = 0;
	nums = 0;
	numz = 0;
	noms = 0;
	while (num < 10)
	{
		nums = num + 1;
		while (nums < 9)
		{
			while (numz < 10)
			{
				noms = nums + 1;
				while (noms < 10)
				{
					putchar('0' + num);
					putchar('0' + nums);
					putchar(' ');
					putchar('0' + numz);
					putchar('0' + noms);
					if (num < 10)
					{
						putchar(',');
						putchar(' ');
					}
					noms++;
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


