#include <stdio.h>
/**
 * _islower - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	int r, j;

	for (j = 97; j <= 122; j++)
	{
		if (j == c)
		{
			r = 1;
		}
		else if (j != c)
		{
			r = 0;
		}
	}
	return (r);
}
