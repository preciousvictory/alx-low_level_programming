#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: 
 *
 * - The _strdup() function returns a pointer to a new string which is a
 *   duplicate of the string str. Memory for the new string is obtained
 *   with malloc, and can be freed with free.
 * - Returns NULL if str = NULL
 * - On success, the _strdup function returns a pointer to the duplicated
 *   string. It returns NULL if insufficient memory was available
 * Return: a pointer to duplicate string or NULL
 */

char *_strdup(char *str)
{
	char *ar;
	int i;

	ar = malloc(strlen(str));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < strlen(str))
	{
		ar[i] == str[i]
	}

	return (ar);
}
