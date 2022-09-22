#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Description: the function compares s1 and s2 strings character by character
 * Return: --
 * if the first non-matching character in s1 is greater in ASCII than of s2.
 * if the first non-matching character in s1 is lower (in ASCII) than of s2.
 * if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, r;

	r = *s1 - *s2;
	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			break;
	}

	return (r);
}
