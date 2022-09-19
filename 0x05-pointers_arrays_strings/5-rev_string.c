#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s:  the character
 */

void rev_string(char *s)
{
	int i, in, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	in = i;
	for (j = 0; j < i; j++)
	{
		temp = s[j];

		s[j] = s[in];
		s[in] = temp;

		in--;
	}
}
