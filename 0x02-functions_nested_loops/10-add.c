#include <stdio.h>
#include "main.h"
/**
 * add - takes two parameter and add it
 * @a: first parameter
 * @b: second parameter
 *
 * Return: 0 (success
 */
nt add(int a, int b)
{
	sum ;

	sum = a + b;

	if (sum < 10)
	{
		putchar(sum);
	}
	else
	{
		putchar(48 + sum / 10);
		putchar(48 + sum % 10);
	}
	putchar('\n');
}
