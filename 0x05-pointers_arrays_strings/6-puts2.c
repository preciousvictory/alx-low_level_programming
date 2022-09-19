#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * , starting with the first character, followed by a new line.
 * @str: the str
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i = i + 2;
	}
	_putchar('\n');
}
