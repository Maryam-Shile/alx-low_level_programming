#include <stdio.h>
#include "main.h"

/**
 *is_prime_number - main function
 *@n: input number
 *Return: returns helper
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	return (prime_helper(n, 2));
}

/**
 * prime_helper - helper function
 * @n: input number
 * @i: increment number
 *Return: returns prime
 */

int prime_helper(int n, int i)
{
	if (n % i == 0)
	{

		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	if (i > n)
	{
		return (1);
	}
	return (prime_helper(n, i + 1));
}
