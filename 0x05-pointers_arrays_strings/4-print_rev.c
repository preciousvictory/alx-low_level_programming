#include "main.h"

/**
 * print_rev - a function that prints a string, followed by a new line, to stdout.
 * @str: the character
 */
void print_rev(char *s)
{
	int i, length;

	i = _strlen(s);
	while (s[i])
	{
		i++;
	}

	length = i;
	while (length)
	{
		write(1, &s[i], 1);
		length--;
	}
	_putchar('\n');
}
