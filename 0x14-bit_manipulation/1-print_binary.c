#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n != 0)
	{
		if (n % 2 == 0)
			_putchar('0');
		else
			_putchar('1');
		n /= 2;
	}
}
