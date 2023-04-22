#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function pointer prototype name
 * @name: char to be printed
 * @f: pointer to function
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
