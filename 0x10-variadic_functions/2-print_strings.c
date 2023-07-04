#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer to constant separator
 * @n: constant number of args
 * @...: all arguments;
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
