#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: The number
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	print_number(n / 10);

	_putchar(48 + n % 10);
}
