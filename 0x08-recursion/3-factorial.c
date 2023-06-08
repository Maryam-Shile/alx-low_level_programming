#include <stdio.h>
#include "main.h"
/**
 * factorial - calculates factorial of n
 * @n: argument parameter
 * Return: returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
