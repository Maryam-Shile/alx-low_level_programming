#include <stdio.h>

/**
 * main - the main function of the program
 * Description: prints alphabets with while loop
 * Return: return 0 when successful
 */

int main(void)
{
	char abc;
	char ABC;

	abc = 'a';
	ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');

	return (0);
}
