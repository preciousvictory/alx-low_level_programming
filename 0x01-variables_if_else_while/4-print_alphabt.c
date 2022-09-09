#include <stdio.h>
/**
 * main -prints all letter from a to z excep letter ( q, e )
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
