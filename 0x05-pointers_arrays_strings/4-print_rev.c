#include "main.h"

/**
 * print_rev - a function that prints a string, followed by a new line, to stdout.
 * @str: the character
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s); 
	while (s[i])
	{
		write(1, &s[i], 1);
		i--;
	}
	_putchar('\n');
}
