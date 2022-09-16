#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: The number
 */

void print_number(int n)
{
	if (n >=0 && n < 10)
	{
		_putchar(48 + n);

	}
	else if (n >= 10 && n < 100)
	{
		_putchar(48 + n / 10);
		_putchar(48 + n % 10);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(48 + n / 100);
		_putchar(48 + (n % 100) / 10);
		_putchar(48 + n % 10);
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar(48 + n / 1000);
		_putchar(48 + (n % 1000) / 100);
		_putchar(48 + (n % 100) / 10);
		_putchar(48 + n % 10);
	}
}
