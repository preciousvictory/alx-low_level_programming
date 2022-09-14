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
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
