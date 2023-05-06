#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flips value of numbers
 * @n: number1
 * @m: number2
 * Return: returns number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int i;
        unsigned int flip = 0;
        unsigned long int mask = 1;

        for (i = 0; i < sizeof(unsigned long int) * 8; i++)
        {
                if ((mask & n) != (mask & m))
                {
                        flip++;
                }
                mask <<= 1;
        }
        return (flip);
}
