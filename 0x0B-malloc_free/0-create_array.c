#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: the character too fill the array
 *
 * Returns NULL if size = 0
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	if (ar == NULL)
		printf("Not enough memmry");

	return (ar);
}
