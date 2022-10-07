#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc: 
 * malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * new_size: new size, in bytes of the new memory block
 *
 * Description
 * The contents will be copied to the newly allocated space, in the range from
 * the start of ptr up to the minimum of the old and new sizes
 * - If new_size > old_size, the “added” memory should not be initialized
 * - If new_size == old_size do not do anything and return ptr
 * - If ptr is NULL, then the call is equivalent to malloc(new_size), for all
 *   values of old_size and new_size
 * - If new_size is equal to zero, and ptr is not NULL, then the call is
 *   equivalent to free(ptr). Return NULL
 * - Don’t forget to free ptr when it makes sense
 *
 * Return: new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n_ptr =  malloc(new_size);
		if (n_ptr == NULL)
			return(n_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}

	if (new_size > old_size)
		n_ptr = malloc(new_size);

	return (n_ptr);
}
