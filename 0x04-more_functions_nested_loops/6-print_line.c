#include "main.h"

/**
 * mul - a function that draws a straight line in the terminal.
 * @n: length of line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
