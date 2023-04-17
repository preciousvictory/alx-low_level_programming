#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
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
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, L, R;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		pos = L + (((double)(R - L) / (array[R] - array[L])) * (value - array[L]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			R = pos - 1;
		else
			L = pos + 1;
	}

	return (-1);
}
