#include <stdio.h>
/**
 * _islower - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	char i = 'a';
	int j = 97;
	int r;

	while (i <= 'z' || j <= 122)
	{
		if (c == i)
		{
			r = 1;
		}
		else if (c != i)
		{
			r = 0;
		}
		i++;
		j++;
	}
	return (r);
}
