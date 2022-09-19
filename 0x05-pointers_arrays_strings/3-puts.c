#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: the character
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		write(1, &str[i], 1);
	}
}
