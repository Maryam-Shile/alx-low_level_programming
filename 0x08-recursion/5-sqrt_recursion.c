#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - recursively calculates square roots
 *@n: value
 *Return: returns square value
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 *sqrt_helper - helper to _sqrt_recursion
 *@n: value
 *@i: root
 *Return: returns sqrt_helper
 */
int sqrt_helper(int n, int i)
{
	if (i > n)
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
	return (sqrt_helper(n, i + 1));
}
