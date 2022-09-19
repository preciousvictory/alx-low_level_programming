#include "main.h"

/**
 * print_rev - a function that prints a string, followed by a
 * new line, to stdout.
 * @s: the character
 */
void print_rev(char *s)
{
	int i, length;

	i = 0;
	while (s[i])
	{
		i++;
	}

	length = i;
	while (!(length < 0))
	{
		write(1, &s[length], 1);
		length--;
	}
}
