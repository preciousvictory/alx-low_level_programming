#include <stdio.h>
/**
 * main -prints all letter from a to z and A to Z then a newline
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char u;

	c = 'a';
	u = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
