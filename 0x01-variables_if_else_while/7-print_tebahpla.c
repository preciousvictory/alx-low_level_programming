#include <stdio.h>
/**
 * main -prints all letter from a to z in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
