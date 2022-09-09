#include <stdio.h>
/**
 * main -prints all letter from a to z
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
