#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s - the character
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		write(1, &s[i], 1);
	}
	_putchar('\n');
}
