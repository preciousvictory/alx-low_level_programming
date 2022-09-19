#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: pointer variable
 * @b: pointer variable
 */

void swap_int(int *a, int *b)
{
	int a = *a;
	int b = *b;

	*a = b;
	*b = a;
}
