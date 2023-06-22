#include <stdio.h>
#include "3_calc.h"
#include <string.h>

/**
 *
 *
 *
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	
	if (strcmp(s, "+") != 0 && strcmp(s, "-") != 0 && strcmp(s, "*") != 0 && strcmp(s, "/") != 0 && strcmp(s, "%") != 0)
		return NULL;
	while(ops[i].op != NULL)
	{
		if 
