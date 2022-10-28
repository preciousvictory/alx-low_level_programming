#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;
	/* ^ returns 1 if either of the two numbers are not the same */
	unsigned long int checking = n ^ m; 

	for (i = 0; checking > 0; i++)
	{
		if (checking & 1)
			count++;

		checking >>= 1;
	}

	return (count);
}
