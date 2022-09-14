#include <stdio.h>
/**
 * _islower - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	char i;	
	int j = 97;
	int r;

	i = 'a';
	while (j <= 122 || i <= 'z')
	{
		if (c == j || c == i)
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
