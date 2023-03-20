#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints alphabets in reverse with while loop
 * Return: return 0 when successful
 */

int main(void)
{
	char zyx;

	zyx = 'z';

	while (zyx >= 'a')
	{
		putchar(zyx);
		zyx--;
	}
	putchar('\n');

	return (0);
}
