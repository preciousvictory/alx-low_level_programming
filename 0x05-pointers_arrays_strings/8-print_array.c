#include "main.h"

/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer variable
 * @n: integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		prinf("%d, ", a[i]);
	}
	_putchar('\n');
}
