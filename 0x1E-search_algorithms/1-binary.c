#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * If value is not present in array or if array is NULL, your function
 * must return -1
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t R = size - 1, L = 0, f = 0, i;

	if (array == NULL)
		return (-1);

	while (L != R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i != R)
				printf(", ");
			else
				printf("\n");
		}

		f = L + (R - L) / 2;
		if (value == array[f])
		{
			return (array[f]);
		}

		if (value > array[f])
		{
			L = f + 1;
		}
		else if (value < array[f])
		{
			R = f - 1;
		}
	}
	printf("Searching in array: %d\n", array[i - 1]);
	return (-1);
}
