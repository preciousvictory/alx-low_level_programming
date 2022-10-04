#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: row
 * @height: column
 *
 * - Each element of the grid should be initialized to 0
 * - The function should return NULL on failure
 * - If width or height is 0 or negative, return NULL
 * Return: 2 dimensional array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, len;

	len = (width * height) + 1;
	ar = malloc(len);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
