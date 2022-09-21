#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of character from src to be added to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i != n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i != n)
	{
		dest[i] = '\0';

		if (src[i] == '\0')
			break;

		i++;
	}
	return (dest);
}
