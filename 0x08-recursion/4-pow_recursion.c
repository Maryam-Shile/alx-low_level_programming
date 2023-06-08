#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calculates value of
 * x raised to power of y
 * @x: power of number
 * @y: exponent
 * Return: returns answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
