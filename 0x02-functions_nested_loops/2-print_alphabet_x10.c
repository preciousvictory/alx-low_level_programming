#include <stdio.h>
/**
 * print_alphabet_x10 - void
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');	
}
