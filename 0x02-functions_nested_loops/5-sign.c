#include <stdio.h>
/**
 * print_sign - (int n)
 * @n: parameter checked
 *
 * Return: 0 (success)
 */
int print_sign(int n)
{
	int r;
	
	if (n > 0)
	{
		r = 1;
	}
	else if (n == 0)
	{
		r = 0;
	}
	else
	{
		r = -1;
	}
	
	return (r);
}
