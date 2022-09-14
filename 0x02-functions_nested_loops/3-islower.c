#include <stdio.h>
/**
 * _islower - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	
	int j = 97;
	int r;

	while (j <= 122)
	{
		if (c == j)
		{
			r = 1;
		}
		else if (c != j)
		{
			r = 0;
		}
		j++;
	}
	return (r);
}
