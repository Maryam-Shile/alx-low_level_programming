#include <stdio.h>
#include "3-calc.h"

/**
 * opp_add - adds a and b
 * @a: first arg
 * @b: second arg
 * Return: returns sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts a from b
 * @a: first arg
 * @b: second arg
 * Return: returns diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first arg
 * @b: second arg
 * Return: returns products of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a with b
 * @a: first arg
 * @b: second arg
 * Return: returns result of division
 * of a with b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates mod
 * @a: first arg
 * @b: second arg
 * Return: returns remainder of division
 * of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
