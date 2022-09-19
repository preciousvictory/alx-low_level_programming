#include "main.h"

/**
 * print_rev - a function that prints a string, followed by a new line, to stdout.
 * @str: the character
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(str); 
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
	_putchar('\n');
}
