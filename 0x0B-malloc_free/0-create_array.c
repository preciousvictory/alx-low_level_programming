#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * Returns NULL if size = 0
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size);
	for (i = 0; i < size - 1; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
