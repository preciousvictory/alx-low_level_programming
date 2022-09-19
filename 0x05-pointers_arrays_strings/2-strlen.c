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

	count = 0;
	for (i = 0; i < *s ; i++)
	{
		count = count + 1;
		s++;
	}

	return (count);
}
