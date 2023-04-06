#include <stdio.h>
#include "main.h"

/**
 *factorial - factorial calculation
 *@n: int n
 *Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}