#ifndef MAIN_H
#define MAIN_H

/**
 * positive_or_negative - returns if integer is positive or negative
 * Description: returns if integer is postive of negative
 */

#include <stdio.h>

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i)
;
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
#endif /* MAIN_H */
