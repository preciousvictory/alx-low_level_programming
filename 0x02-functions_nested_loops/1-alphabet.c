#include <stdio.h>
/**
 * print_alphabet - void
 *
 * Return: 0 (success)
 */
int print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
