#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets value of number to 0 at index
 * @n: number
 * @index: value
 * Return: return 1 if successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
unsigned long int msk;
    if (index >= sizeof(unsigned long int) * 8)
        return -1;
msk = ~mask;
    *n = *n & msk;
    return (1);
}
