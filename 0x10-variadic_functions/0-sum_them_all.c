#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all argument in function
 * @n: number of args
 * * @...: all arguments
 * * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, i = 0, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		sum += x;
		i++;
	}
	va_end(args);
	return (sum);
}
