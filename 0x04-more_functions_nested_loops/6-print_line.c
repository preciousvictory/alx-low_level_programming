#include "main.h"

/**
 * mul - a function that draws a straight line in the terminal.
 * @n: length of line
 */
void print_line(int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
