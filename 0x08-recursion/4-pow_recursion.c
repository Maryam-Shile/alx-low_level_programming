#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - power recursive function
 *@x: base number
 *@y: power number
 *Return: returns result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
