#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all datatypes
 * @format: constant format
 * Return: returns nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0;
	char *s, *sep = "";

	va_start(args, format);
	while (format != NULL && format[n] != '\0')
	{
		switch (format[n])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				n++;
				continue;
		}
		sep = ", ";
		n++;
	}
	printf("\n");
	va_end(args);
}
