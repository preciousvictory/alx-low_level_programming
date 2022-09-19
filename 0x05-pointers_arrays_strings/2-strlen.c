#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The string
 *
 * Return: returns the length of string
 */

int _strlen(char *s)
{
	int i, count;

	for (i = 0; s[i] == '\0'; i++)
	{
		count += 1;
		s++;
		printf(" %s ", s);
	}

	return (count);
}
