#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integer
 * @a: array
 * @n; length of array
 */

void reverse_array(int *a, int n)
{
	int i, temp, rev;

	rev = n;
	for (i = 0; s[i] != '\0'; i++)
	{
		temp = a[i];

		a[i] = a[rev];
		a[rev] = temp;

		rev--;
	}
}
