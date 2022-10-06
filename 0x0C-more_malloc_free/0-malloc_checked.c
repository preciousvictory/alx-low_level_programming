#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str =  malloc(b);
	if (str == NULL)
		exit(98);
}
