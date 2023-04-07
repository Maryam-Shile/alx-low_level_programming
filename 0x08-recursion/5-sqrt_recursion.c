#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - recursively calculates square roots
 *@n: value
 *@i: square value
 *Return: returns square value
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
int sqrt_helper(int n, int i)
{
	if (i >= n)
	{
		return (-1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper (n, i + 1));
}
