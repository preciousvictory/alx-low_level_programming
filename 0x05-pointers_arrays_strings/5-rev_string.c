#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s:  the character
 */

void rev_string(char *s)
{
	int i, j, l;

	i = 0;
	while (s[i])
	{
		i++;
	}
	j = 0;
	while (j != (i + 1))
	{
		l = i
		*(s + j) = s[l];
		j++;
		l--;
	}
}
