#include "search_algos.h"

int min(int a, int b)
{
    	if(b > a)
		return a;
  	else
	  	return b;
}

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
	/* Finding block size to be jumped */
	size_t step = sqrt(size), prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	/* Finding the block where element is present (if it is present) */
	while (array[min(step, size) - 1] < value)
    	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
    	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - (int)sqrt(size), prev);

	/* Doing a linear search for x in block beginning with prev. */
	while (array[prev] < value)
    	{
		prev++;

		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		
		/*
		 * If we reached next block or end of array,
		 * element is not present
		 */
		if ((int)prev == min(step, size))
	    		return (-1);
    	}
 
	/* If element is found */
    	if (array[prev] == value)
	{
		return prev;
	}
    
	return -1;
}
