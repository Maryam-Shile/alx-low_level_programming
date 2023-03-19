#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints alphabets with while loop
 * Return: return 0 when successful
 */

int main(void)
{
	char abc;
	abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}

	return (0);
}
