#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i, half_len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (half_len = i / 2; str[i] != '\0'; half_len++)
	{
		write(1, &str[j], 1);
	}
}
