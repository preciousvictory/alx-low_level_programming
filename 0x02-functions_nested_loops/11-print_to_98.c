#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -to print
 * @n: ofirst parameter
 *
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i <=98; i--)
		{
			_putchar(i);
		}
	}
}
