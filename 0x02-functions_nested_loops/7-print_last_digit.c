#include <stdio.h>
#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: value to be checked
 *
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		a = -(a)
	}
	_putchar(48 + a);
	return (a);
}
