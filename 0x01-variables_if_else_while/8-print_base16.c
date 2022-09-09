#include <stdio.h>
/**
 * main -prints ll the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
