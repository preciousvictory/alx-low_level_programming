#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s:  the character
 */

void rev_string(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i])
	{
		i++;
	}

	j = 0;
	len = i;
	while (s[j] != '\0')
	{
		s[j] = s[len];
		j++;
	}
}
