#include <stdio.h>
/**
 * _islower - (int c)
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	char i = 'a';
	int r;

	while (i < 'z')
	{
		if (c == i)
		{
			r = 1;
		}
		else if (c == i)
		{
			r = 0;
		}
	}
	return r;
}
