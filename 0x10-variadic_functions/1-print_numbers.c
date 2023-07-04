#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer to sep
 * @n: number of arguments
 * @...: arguments
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
