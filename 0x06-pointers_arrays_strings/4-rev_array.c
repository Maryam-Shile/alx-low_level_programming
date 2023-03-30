#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: pointer parameter
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int *begin_ptr, *end_ptr, ch;

	begin_ptr = a;
	end_ptr = a;
	for (i = 0; i < n - 1; i++)
	{
		end_ptr++;
	}
	for (i = 0; i < n / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
