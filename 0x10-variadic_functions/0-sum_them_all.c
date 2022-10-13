#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of element to be add
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	return (sum);
}
