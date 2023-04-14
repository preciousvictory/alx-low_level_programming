#include "search_algos.h"
/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
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
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	/* Finding the block where element is present (if it is present) */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump < size - 1)
		jump = jump;
	else
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (value);

	return (-1);
}
