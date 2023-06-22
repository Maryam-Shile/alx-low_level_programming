#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function pointer that prints name
 * @name: an argument in the function
 * @f: pointer to function
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
